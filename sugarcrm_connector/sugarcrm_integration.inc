<?php
function connectSugarCRM($username=null, $psw=null){
    include_once drupal_get_path('module', 'sugarcrm_connector') . '/SugarCrmConnector.php';
    try {
      $sugar = sugarCrmConnector::getInstance();
       $sugar->connect($username, $psw);
       return TRUE;
}
catch (Exception $e) {
        return FALSE;
}
}
function getCases(){
    include_once drupal_get_path('module', 'sugarcrm_connector') . '/SugarCrmConnector.php';
    try{
        $sugar = sugarCrmConnector::getInstance();
        $sugar->connect(); // we should have a cookie here, no need for username/password
        $casesData = $sugar->getEntryList('Cases', "cases.status != 'Closed'", 'name', 0, array('name', 'account_id'));
        return $casesData;
    }
    catch (Exception $e) {
        throw new Exception($e->getMessage());
    }
}
 function getUserID(){
  include_once drupal_get_path('module', 'sugarcrm_connector') . '/SugarCrmConnector.php';
    try{
        $sugar = sugarCrmConnector::getInstance();
        $sugar->connect(); // we should have a cookie here, no need for username/password
        $userID = $sugar->getUserID();
        return    $userID; 
    }
    catch (Exception $e) {
        throw new Exception($e->getMessage());
    }   
 }
 
 function addRow($case_id,$account_id,$description, $comment,$date, $hours, $category){
     include_once drupal_get_path('module', 'sugarcrm_connector') . '/SugarCrmConnector.php';
    try{
        $sugar = sugarCrmConnector::getInstance();
        $sugar->connect(); // we should have a cookie here, no need for username/password
        $userID = $sugar->getUserID();
        $data = array(
        array(
            'name' => "date_entered",
            'value' => date('Y-m-d H:i:s'),
        ),
        array(
            'name' => "date_modified",
            'value' => date('Y-m-d H:i:s'),
        ),
        array(
            'name' => "case_id",
            'value' => $case_id,
        ),
        array(
            'name' => "account_id",
            'value' => $account_id,
        ),
        array(
            'name' => "description",
            'value' => $description,
        ),
        array(
            'name' => "inv_comment",
            'value' => $comment,
        ),
        array(
            'name' => "assigned_user_id",
            'value' => $userID,
        ),
        array(
            'name' => "modified_user_id",
            'value' => $userID,
        ),
        array(
            'name' => "created_by",
            'value' => $userID,
        ),
        array(
            'name' => "date",
            'value' => $date,
        ),
        array(
            'name' => "time_length",
            'value' => $hours,
        ),
        array(
            'name' => "category",
            'value' => $category,
        ),
    );
     $sugar->setEntry('JCRMTime', $data);
     return TRUE;
    }
    catch (Exception $e) {
        throw new Exception($e->getMessage());
    }   
 }
function getRows($caseList) {
    include_once drupal_get_path('module', 'sugarcrm_connector') . '/SugarCrmConnector.php';

$sugar = sugarCrmConnector::getInstance();
    $sugar->connect();
    $userID = $sugar->getUserID();
    $cases = array();
    $rows= array();
    foreach ($caseList as $caseID) {
        $cases[] = $sugar->getEntryList('JCRMTime', sprintf('jcrmtime.case_id = "%s"', $caseID) . " AND " . sprintf('jcrmtime.created_by = "%s"', $userID), 'date', 0, array());
    }
    $fields = array('description', 'date_entered', 'case_name', 'account_name', 'time_length', 'category');
    $headers = array();
    foreach ($cases as $case) {
        foreach ($case->entry_list as $entry) {
            $data = array();

            foreach ($entry->name_value_list as $values) {
                if (in_array($values->name, $fields)) {
                    $headers[$values->name] = $values->name;

                    switch ($values->name) {
                        case 'category':
                            switch ($values->value) {
                                case '1':
                                    $category = 'Account Management';
                                    break;
                                case '2':
                                    $category = 'Admin';
                                    break;
                                case '3':
                                    $category = 'Analyse og design';
                                    break;
                                case '4':
                                    $category = 'Consulting';
                                    break;
                                case '5':
                                    $category = 'Design og layout';
                                    break;
                                case '6':
                                    $category = 'Dokumentation / vejledninger';
                                    break;
                                case '7':
                                    $category = 'Drift';
                                    break;
                                case '8':
                                    $category = 'HTML';
                                    break;
                                case '9':
                                    $category = 'Installation';
                                    break;
                                case '10':
                                    $category = 'Møde';
                                    break;
                                case '11':
                                    $category = 'OS Bidrag max 2 timer per uge';
                                    break;
                                case '12':
                                    $category = 'Opgradering af Postnuke';
                                    break;
                                case '13':
                                    $category = 'Pre-sales';
                                    break;
                                case '14':
                                    $category = 'Projektledelse';
                                    break;
                                case '15':
                                    $category = 'Support';
                                    break;
                                case '16':
                                    $category = 'Test';
                                    break;
                                case '17':
                                    $category = 'Udvikling';
                                    break;
                                case '18':
                                    $category = 'Undervisning';
                                    break;
                            }
                            $data[] = array('data' => $category);
                            break;
                        case 'time_length':
                            $data[] = array('data' => $values->value);
                            break;
                        default:
                            $data[] = array('data' => $values->value);
                            break;
                    }
                }
            }
            $rows[] = $data;
        }
    }
    return $rows;
                            }