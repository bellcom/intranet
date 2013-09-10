<?php

function login_form($form, &$form_state) {
    $form = array(
        'sugar_username' => array(
            '#type' => 'textfield',
            '#id' => t('sugar_username'),
            '#title' => t('SugarCRM username:'),
            '#required' => TRUE,
        ),
        'sugar_password' => array(
            '#type' => 'password',
            '#id' => t('sugar_password'),
            '#title' => t('SugarCRM password:'),
            '#required' => TRUE,
        ),
        'submit' => array(
            '#type' => 'submit',
            '#value' => t('Login')
    ));
    return $form;
}

function login_form_submit($form, &$form_state) {
    global $user;
    include_once drupal_get_path('module', 'sugarcrm_connector') . '/SugarCrmConnector.php';
    $username = $form_state['values']['sugar_username'];
    $psw = $form_state['values']['sugar_password'];
    try {
        $sugar = sugarCrmConnector::getInstance();
        $sugar->connect($username, $psw);   
        $account = user_load($user->uid); 
        $edit = array(
            'field_sugarcrm_username' => array(
            'und' => array(
             0 => array(
            'value' => $username,
        ),
        ),
       ),
           'field_sugarcrm_password' => array(
            'und' => array(
             0 => array(
            'value' => md5($psw),
        ),
        ),        
        ),
);
   user_save($account, $edit);
        
    } catch (Exception $e) {
        $error = $e->getMessage();
        drupal_set_message(t($error), 'error');
    }
}