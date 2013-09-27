<?php
/**
 * @file
 * intranet_fe_block_boxes.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function intranet_fe_block_boxes_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Målsætninger 2013';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'objectives';
  $fe_block_boxes->body = '<p>Omsætningsmål København</p><ul><li>Omsætning: 2.6 millioner</li><li>Overskud (mindst):300.000 kr.</li><li>Ansatte: 4 medarbejdere</li></ul><p>Omsætningsmål Kolding</p><ul><li>Omsætning: 7 millioner</li><li>Overskud (mindst):700.000 kr.</li><li>Ansatte: 12 medarbejdere</li></ul><p>Medarbejder målsætninger:</p><ul><li>xxxxx</li><li>xxxxx</li></ul>';

  $export['objectives'] = $fe_block_boxes;

  return $export;
}
