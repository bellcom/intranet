<?php
/**
 * @file
 * intranet_panels_layout.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function intranet_panels_layout_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'subpage';
  $layout->admin_title = 'Subpage';
  $layout->admin_description = '';
  $layout->category = 'Custom';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_r',
          1 => 'center',
          2 => 'right_r',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '33.967955778882676',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_r' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '33.00352354662935',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right_r' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '33.02852067448766',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'reg',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => 'top-row',
      ),
      'reg' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '66.9751802285415',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '33.0248197714585',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['subpage'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'subpage_backward';
  $layout->admin_title = 'Subpage backward';
  $layout->admin_description = '';
  $layout->category = 'Custom';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region',
          1 => 'center_region',
          2 => 'right_region',
        ),
        'parent' => 'main',
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'left-region',
        'width' => '33.024528812713534',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'center_region' => array(
        'type' => 'region',
        'title' => 'center-region',
        'width' => '33.95923672379226',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'right-region',
        'width' => '33.01623446349421',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region_',
          1 => 'right_region_',
        ),
        'parent' => 'main',
        'class' => 'bottom-row',
      ),
      'left_region_' => array(
        'type' => 'region',
        'title' => 'left-region',
        'width' => '66.97648756472286',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right_region_' => array(
        'type' => 'region',
        'title' => 'right-region',
        'width' => '33.02351243527715',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['subpage_backward'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'two_columns';
  $layout->admin_title = 'Two_columns';
  $layout->admin_description = '';
  $layout->category = 'Custom';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'column_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.99170490795258',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'column_right' => array(
        'type' => 'region',
        'title' => 'column right',
        'width' => '30.008295092047423',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $export['two_columns'] = $layout;

  return $export;
}
