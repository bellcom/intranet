<?php
/**
 * @file
 * intranet_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function intranet_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'accordion';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Accordion';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'poll_delta_recent',
      'hide_title' => 1,
      'title' => 'First',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'block_delta_1',
      'hide_title' => 1,
      'title' => 'Second',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'autoHeight' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion');
  t('First');
  t('Second');

  $export['accordion'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'default_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Default tabs';
  $quicktabs->tabs = array(
    0 => array(
      'nid' => '49',
      'teaser' => 1,
      'hide_title' => 0,
      'title' => 'First tab',
      'weight' => '-100',
      'type' => 'node',
    ),
    1 => array(
      'nid' => '50',
      'teaser' => 1,
      'hide_title' => 0,
      'title' => 'Second tab',
      'weight' => '-99',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Arrows';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Default tabs');
  t('First tab');
  t('Second tab');

  $export['default_tabs'] = $quicktabs;

  return $export;
}
