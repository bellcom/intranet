<?php

function setClient($accountName) {
    try {  load_google_api_library();
        $clientInfo = gauth_account_load($accountName);

        if (!$clientInfo) {
            throw new Exception(t("Can't authenticate with google:account $accountName missing"));
        }
        if (!$clientInfo["is_authenticated"]) {
            throw new Exception(t("Can't authenticate with google:account $accountName is not autentificated"));
        }


        $client = new Google_Client(array('ioFileCache_directory' => '/usr/share/php/tmp/' . $clientInfo["developer_key"]));
        $client->setClientId($clientInfo ["client_id"]);
        $client->setClientSecret($clientInfo ["client_secret"]);
        $client->setDeveloperKey($clientInfo["developer_key"]);
        $client->setAccessToken($clientInfo["access_token"]);
        return $client;
    } catch (Exception $e) {
        throw new Exception($e->getMessage());
    }
}

function account_exists($accountName) {
    try {
        load_google_api_library();
        $clientInfo = gauth_account_load($accountName);
        if (!$clientInfo)
            return FALSE;

        if (!$clientInfo["is_authenticated"])
            return FALSE;
        return TRUE;
    } catch (Exception $e) {
        throw new Exception($e->getMessage());
    }
}

function load_google_api_library() {
    $info = libraries_load('google-api-php-client');

    if (!$info['loaded']) {
        throw new Exception(t("Can't authenticate with google as library is missing check Status report or Readme for requirements"));
    }
}

function addGoogleTask($accountName, $googleListID, $title, $notes = "Add a note.", $due = null, $parent_id = null) {
    try {
        load_google_api_library();
        include_once libraries_get_path("google-api-php-client") . '/src/contrib/Google_TasksService.php';
        $client = setClient($accountName);
        $tasksService = new Google_TasksService($client);
        if (!$googleListID) {
            $result = $tasksService->tasklists->get('@default');
            $googleListID = $result['id'];
        }
        $task = new Google_Task();
        $task->setTitle($title);
        if (isset($notes))
            $task->setNotes($notes);
        if (isset($due) && !empty($due)) {
            $date = new DateTime($due, new DateTimeZone('UTC'));
            $task->setDue($date->format(DateTime::RFC3339));
        }
        //$task->setParent($parent_id);
        $result = $tasksService->tasks->insert($googleListID, $task);
        if (isset($parent_id))
            $tasksService->tasks->move($googleListID, $result['id'], array('parent' => $parent_id));
        return array('type' => 'OK',
            'google_task_id' => $result['id'],
            'google_tasklist_id' => $googleListID
        );
    } catch (Exception $e) {
        $error = array('type' => 'error',
            'msg' => $e->getMessage());
        return $error;
    }
}

function deleteGoogleTask($accountName, $googleListID, $task_id) {
    try {
        load_google_api_library();
        include_once libraries_get_path("google-api-php-client") . '/src/contrib/Google_TasksService.php';
        $client = setClient($accountName);
        $tasksService = new Google_TasksService($client);
        if (!$googleListID) {
            $result = $tasksService->tasklists->get('@default');
            $googleListID = $result['id'];
        }
        return $tasksService->tasks->delete($googleListID, $task_id);
    } catch (Exception $e) {
        $error = array('type' => 'error',
            'msg' => $e->getMessage());
        return $error;
    }
}

function completeGoogleTask($accountName, $googleListID, $google_task_id, $compl, $subtasks = array()) {
    try {

        load_google_api_library();
        include_once libraries_get_path("google-api-php-client") . '/src/contrib/Google_TasksService.php';
        $client = setClient($accountName);
        $tasksService = new Google_TasksService($client);
        if (!$googleListID) {
            $result = $tasksService->tasklists->get('@default');
            $googleListID = $result['id'];
        }
        setCompleted($tasksService->tasks, $googleListID, $google_task_id, $compl);
        foreach ($subtasks as $key => $task_id)
            setCompleted($tasksService->tasks, $googleListID, $task_id, $compl);
        return $error = array('type' => 'OK',
            'msg' => "");
    } catch (Exception $e) {
        $error = array('type' => 'error',
            'msg' => $e->getMessage());
        return $error;
    }
}

function setCompleted($service, $googleListID, $google_task_id, $compl) {
    // include_once '/var/www/intranet.bellcom.dk.devel.dk/public_html/sites/all/libraries/google-api-php-client/src/contrib/Google_TasksService.php';
    try {

        if ($compl) {

            $task = new Google_Task($service->get($googleListID, $google_task_id));
            $task->setStatus('completed');
        } else {
            $taskArray = $service->get($googleListID, $google_task_id);
            $taskArray['status'] = "needsAction";
            $taskArray['completed'] = null;
            $task = new Google_Task($taskArray);
        }

        $result = $service->update($googleListID, $task->getId(), $task);
    } catch (Exception $e) {
        throw new Exception($e->getMessage());
    }
}

function editGoogleTask($accountName, $googleListID, $google_task_id, $note = null, $title = null, $duedate = null) {
    try {
        load_google_api_library();
        include_once libraries_get_path("google-api-php-client") . '/src/contrib/Google_TasksService.php';
        $client = setClient($accountName);
        $tasksService = new Google_TasksService($client);
        if (!$googleListID) {
            $result = $tasksService->tasklists->get('@default');
            $googleListID = $result['id'];
        }
        $task = new Google_Task($tasksService->tasks->get($googleListID, $google_task_id));
        if ($note)
            $task->setNotes($note);
        if ($title)
            $task->setTitle($title);
        if ($duedate)
            $task->setDue($duedate);
     
        $result = $tasksService->tasks->update($googleListID, $task->getId(), $task);
     
        return $error = array('type' => 'OK',
            'msg' => "");
    } catch (Exception $e) {
        $error = array('type' => 'error',
            'msg' => $e->getMessage());
        return $error;
    }
}

function moveGoogleTask($toAccountName, $googleListID, $task, $subtask) {
    try {
        load_google_api_library();
        include_once libraries_get_path("google-api-php-client") . '/src/contrib/Google_TasksService.php';


        if (account_exists($toAccountName)) {
            $toClient = setClient($toAccountName);
            $toTasksService = new Google_TasksService($toClient);
            if (!$googleListID) {
                $result = $tasksService->tasklists->get('@default');
                $googleListID = $result['id'];
            }
            $taskObj = new Google_Task();
            if (!empty($task['note']))
                $taskObj->setNotes($task['note']);
            if (!empty($task['title']))
                $taskObj->setTitle($task['title']);
            if (!empty($task['duedate'])) {
                $date = new DateTime($task['duedate'], new DateTimeZone('UTC'));
                $taskObj->setDue($date->format(DateTime::RFC3339));
            }
            if (isset($toClient)) {
                $result = $toTasksService->tasks->insert($googleListID, $taskObj);
                $google_task_id = $result['id'];
                $subtasks_id = array();
                foreach ($subtask as $key => $subtask) {
                    $subtaskObj = new Google_Task();
                    $subtaskObj->setTitle($subtask['name']);
                    $result = $toTasksService->tasks->insert($googleListID, $subtaskObj);
                    $subtasks_id[$key] = $result['id'];
                    $toTasksService->tasks->move($googleListID, $result['id'], array('parent' => $google_task_id));
                }
            }
            return array('type' => 'OK',
                'google_task_id' => $google_task_id,
                'google_tasklist_id' => $googleListID,
                'subtasks_id' => $subtasks_id);
        }
    } catch (Exception $e) {
        $error = array('type' => 'error',
            'msg' => $e->getMessage());
        return $error;
    }
}



function getGoogleTaskList($accountName, $default = null) {
    try {
        load_google_api_library();
        include_once libraries_get_path("google-api-php-client") . '/src/contrib/Google_TasksService.php';
        $client = setClient($accountName);
        $tasksService = new Google_TasksService($client);
        $lists = $tasksService->tasklists->listTasklists();
        $tasklists = array();
        if (!$default)  $default = "";
       
        foreach ($lists['items'] as $list) {
            $tasklists[] = array('list' => $list['title'], 'id' => $list['id'], 'is_default' => ($list['id'] == $default) ? 'checked' : "");
        };
        return array("type" => 'OK', 'tasklist' => $tasklists, 'default_list' => $default);
    } catch (Exception $e) {
        $error = array('type' => 'error',
            'msg' => $e->getMessage());
        return $error;
    }
}

function getGoogleTask($accountName, $taskId, $listId) {
    try {
        load_google_api_library();
        include_once libraries_get_path("google-api-php-client") . '/src/contrib/Google_TasksService.php';
        $client = setClient($accountName);
        $tasksService = new Google_TasksService($client);
        if (!$listId) {
            $result = $tasksService->tasklists->get('@default');
            $listId = $result['id'];
        }
        $task = $tasksService->tasks->get($listId, $taskId);
        return $task;
    } catch (Exception $e) {
        $error = array('type' => 'error',
            'msg' => $e->getMessage());
        return $error;
    }
}

//recive all tasks from tasklist

function getGoogleTasks($accountName, $listId) {
    try {
        load_google_api_library();
        include_once libraries_get_path("google-api-php-client") . '/src/contrib/Google_TasksService.php';
        $client = setClient($accountName);
        $tasksService = new Google_TasksService($client);
        if (!$listId) {
            $result = $tasksService->tasklists->get('@default');
            $listId = $result['id'];
         
        }
       
        $tasks = $tasksService->tasks->listTasks($listId);
        $task_arr = array();
        foreach ($tasks['items'] as $curTask) {
            if (empty($curTask['title']))
                continue;
            if (isset($curTask['parent'])) {
                if (isset($task_arr[$curTask['parent']]))
                    $task_arr[$curTask['parent']]["subtasks"][] = $curTask;
            }
            else
                $task_arr[$curTask['id']] = $curTask;
        }


        return $task_arr;
    } catch (Exception $e) {
        throw new Exception($e->getMessage());
        
    }
}


