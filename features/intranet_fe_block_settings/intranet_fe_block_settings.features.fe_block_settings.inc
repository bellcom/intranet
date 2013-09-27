<?php
/**
 * @file
 * intranet_fe_block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function intranet_fe_block_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-objectives'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'objectives',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'administrator' => 4,
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => -12,
      ),
    ),
    'title' => 'Målsætninger og Nøgletal 2013',
    'visibility' => 1,
  );

  $export['blog-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'blog',
    'node_types' => array(),
    'pages' => 'node
contacts
portfolio
portfolio-1-col
portfolio-2-col
portfolio-3-col',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['book-navigation'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'book',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -13,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['calendar-calendar_legend'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'calendar_legend',
    'module' => 'calendar',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dropbox_client-dropbox_files'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dropbox_files',
    'module' => 'dropbox_client',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['dropbox_client-dropbox_search'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dropbox_search',
    'module' => 'dropbox_client',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['dropbox_client-dropbox_upload'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dropbox_upload',
    'module' => 'dropbox_client',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['faq-faq_categories'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'faq_categories',
    'module' => 'faq',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -12,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['follow-site'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'site',
    'module' => 'follow',
    'node_types' => array(),
    'pages' => 'node
<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -11,
      ),
      'theme588' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => -11,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['follow-user'] = array(
    'cache' => 2,
    'custom' => 0,
    'delta' => 'user',
    'module' => 'follow',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['forum-active'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'active',
    'module' => 'forum',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -14,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['forum-new'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'forum',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -4,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -8,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -8,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['markdown-markdown_help'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'markdown_help',
    'module' => 'markdown',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 2,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 4,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['og_extras-group_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'group_info',
    'module' => 'og_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['og_extras-node_links'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'node_links',
    'module' => 'og_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['poll-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'poll',
    'node_types' => array(),
    'pages' => 'contacts
portfolio
portfolio-1-col
portfolio-2-col
portfolio-3-col',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -5,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -5,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['quicktabs-accordion'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'accordion',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['quicktabs-default_tabs'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'default_tabs',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -1,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 3,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['skype_status-button'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'button',
    'module' => 'skype_status',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -15,
      ),
      'theme588' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -7,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -7,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -6,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => 'node
contacts
portfolio
portfolio-1-col
portfolio-2-col
portfolio-3-col',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 5,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 5,
      ),
      'theme588' => array(
        'region' => 'user_menu',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => -30,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['time_registration-time_registration'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'time_registration',
    'module' => 'time_registration',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['twitter_profile_widget-0'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 0,
    'module' => 'twitter_profile_widget',
    'node_types' => array(),
    'pages' => 'node',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => 'Twitter',
    'visibility' => 1,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 6,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 7,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 7,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-article_slider-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'article_slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-calendar-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-calendar-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-categories-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'categories-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-categories-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'categories-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-content_articles-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'content_articles-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-events-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'events-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'article',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-faq-faq_random'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'faq-faq_random',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-faq-faq_recent'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'faq-faq_recent',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-gruppeliste-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'gruppeliste-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'gruppe',
      1 => 'wiki',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-og_extras_members-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'og_extras_members-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'gruppe',
      1 => 'wiki',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => 'Brugere i gruppen',
    'visibility' => 0,
  );

  $export['views-og_members-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'og_members-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-our_team-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'our_team-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-popular_magazine-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popular_magazine-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_magazine-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_magazine-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-sldier-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'sldier-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-type-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'type-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme588',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-welcome-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'welcome-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'theme588' => array(
        'region' => 'user_menu',
        'status' => 1,
        'theme' => 'theme588',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
