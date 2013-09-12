<?php
/**
 * @file
 * intranet_node.features.inc
 */

/**
 * Implements hook_node_info().
 */
function intranet_node_node_info() {
  $items = array(
    'administration' => array(
      'name' => t('Administration'),
      'base' => 'node_content',
      'description' => t('En side forbeholdt til administrative ting. Vises kun til admin. '),
      'has_title' => '1',
      'title_label' => t('Administration'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'calendarevent' => array(
      'name' => t('calendarEvent'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
    'carousel' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'employee' => array(
      'name' => t('Employee'),
      'base' => 'node_content',
      'description' => t('Add staff'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gishitest' => array(
      'name' => t('gishitest'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gruppe' => array(
      'name' => t('Opret Gruppe'),
      'base' => 'node_content',
      'description' => t('En Gruppe content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'services' => array(
      'name' => t('Services'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slider' => array(
      'name' => t('Slider'),
      'base' => 'node_content',
      'description' => t('Use to create slides in header-slider.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'todo_list' => array(
      'name' => t('TODO list'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('TODO List'),
      'help' => '',
    ),
    'upload_fil' => array(
      'name' => t('Upload Fil'),
      'base' => 'node_content',
      'description' => t('Upload filer til en gruppe'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wiki' => array(
      'name' => t('Opret Wiki'),
      'base' => 'node_content',
      'description' => t('En wiki side til dokumentation af kunde projekter m.m.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
