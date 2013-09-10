<?php

function case_filter_form($form, &$form_state) {
   module_load_include('inc', "sugarcrm_connector", "sugarcrm_integration"); 
    drupal_add_js('jQuery(document).ready(function () {  filter.init() });', array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
   $casesData=  getCases();
    foreach ($casesData->entry_list as $case)
        $cases[$case->id] = trim($case->name_value_list[0]->value);
    $form = array(
         'filter' => array(
            '#type' => 'textfield',
            '#title' => t('Filter'), //The label that will be placed with the field
            '#required' => FALSE,
            '#id' => t('filter')
        ),
        'case_id' => array(
            '#type' => 'select',
             '#title' => t('Cases:'),
            '#size' => 20,
            '#id' => 'cases',
            '#multiple' => 'multiple',
            '#options' =>$cases,
        ),
        'submit' => array(
            '#type' => 'submit',
            '#value' => 'Continue')
    );
    if (!empty($form_state['results_table'])) {
        $form['results_table'] = array('#prefix' => '<p>',
            '#suffix' => '</p>', '#markup' => $form_state['results_table']);
    }
    return $form;
}

function case_filter_form_submit($form, &$form_state) {
    $rows = array();
    // описание колонок
    $header = array(
        array('data' => 'date entered'),
        array('data' => 'case_name'),
        array('data' => 'account_name'),
        array('data' => 'time_length'),
        array('data' => 'description'),
        array('data' => 'category'),
    );
    $rows = getEntityList();
    if (!empty($rows)){
    $form_state['results_table'] = theme('table', array('header' => $header, 'rows' => $rows));
   // $form_state['rebuild'] = TRUE;
    }
    else
        $form_state['results_table']=t('No result');
    $form_state['rebuild'] = TRUE;
}


function getEntityList() {
    module_load_include('inc', "sugarcrm_connector", "sugarcrm_integration");
   $cases = $_POST['case_id'];
  
    return getRows($cases);
}

?>
