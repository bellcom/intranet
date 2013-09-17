<?php
/**
 * @file
 * intranet_menu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function intranet_menu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Forside',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:calendar/month
  $menu_links['main-menu:calendar/month'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar/month',
    'router_path' => 'calendar/month',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:contacts
  $menu_links['main-menu:contacts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contacts',
    'router_path' => 'contacts',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:groups
  $menu_links['main-menu:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Groups',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
  );
  // Exported menu link: main-menu:http://intranet.bellcom.dk/?q=gruppeliste
  $menu_links['main-menu:http://intranet.bellcom.dk/?q=gruppeliste'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://intranet.bellcom.dk/?q=gruppeliste',
    'router_path' => '',
    'link_title' => 'Wiki',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
  );
  // Exported menu link: main-menu:http://intranet.bellcom.dk/?q=node/add/gruppe
  $menu_links['main-menu:http://intranet.bellcom.dk/?q=node/add/gruppe'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://intranet.bellcom.dk/?q=node/add/gruppe',
    'router_path' => '',
    'link_title' => 'Opret Gruppe',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'groups',
  );
  // Exported menu link: main-menu:http://intranet.bellcom.dk/?q=node/add/wiki
  $menu_links['main-menu:http://intranet.bellcom.dk/?q=node/add/wiki'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://intranet.bellcom.dk/?q=node/add/wiki',
    'router_path' => '',
    'link_title' => 'Opret Wiki side',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'groups',
  );
  // Exported menu link: main-menu:portfolio
  $menu_links['main-menu:portfolio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio',
    'router_path' => 'portfolio',
    'link_title' => 'Portfolio',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:portfolio-1-col
  $menu_links['main-menu:portfolio-1-col'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-1-col',
    'router_path' => 'portfolio-1-col',
    'link_title' => 'Portfolio 1 col',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'portfolio',
  );
  // Exported menu link: main-menu:portfolio-2-col
  $menu_links['main-menu:portfolio-2-col'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-2-col',
    'router_path' => 'portfolio-2-col',
    'link_title' => 'Portfolio 2 col',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'portfolio',
  );
  // Exported menu link: main-menu:portfolio-3-col
  $menu_links['main-menu:portfolio-3-col'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-3-col',
    'router_path' => 'portfolio-3-col',
    'link_title' => 'Portfolio 3 col',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'portfolio',
  );
  // Exported menu link: management:admin
  $menu_links['management:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
  );
  // Exported menu link: management:admin/appearance
  $menu_links['management:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/config
  $menu_links['management:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/config/content
  $menu_links['management:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/content/dropbox_client/settings
  $menu_links['management:admin/config/content/dropbox_client/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/dropbox_client/settings',
    'router_path' => 'admin/config/content/dropbox_client/settings',
    'link_title' => 'DropBox Client Settings',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/faq
  $menu_links['management:admin/config/content/faq'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/faq',
    'router_path' => 'admin/config/content/faq',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows the user to configure the layout of questions and answers on a FAQ page.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/formats
  $menu_links['management:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/formats/geshifilter
  $menu_links['management:admin/config/content/formats/geshifilter'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats/geshifilter',
    'router_path' => 'admin/config/content/formats/geshifilter',
    'link_title' => 'GeSHi Filter',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the GeSHi filter.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content/formats',
  );
  // Exported menu link: management:admin/config/content/interwiki
  $menu_links['management:admin/config/content/interwiki'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/interwiki',
    'router_path' => 'admin/config/content/interwiki',
    'link_title' => 'Interwiki',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage interwiki links to other websites.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/social-share
  $menu_links['management:admin/config/content/social-share'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/social-share',
    'router_path' => 'admin/config/content/social-share',
    'link_title' => 'Social Share',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure share link styling.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/wysiwyg
  $menu_links['management:admin/config/content/wysiwyg'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/wysiwyg',
    'router_path' => 'admin/config/content/wysiwyg',
    'link_title' => 'Wysiwyg profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure client-side editors.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/date
  $menu_links['management:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/date/calendar
  $menu_links['management:admin/config/date/calendar'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/calendar',
    'router_path' => 'admin/config/date/calendar',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Calendar administration.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/date',
  );
  // Exported menu link: management:admin/config/date/date_popup
  $menu_links['management:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/date',
  );
  // Exported menu link: management:admin/config/date/tools
  $menu_links['management:admin/config/date/tools'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/tools',
    'router_path' => 'admin/config/date/tools',
    'link_title' => 'Date Tools',
    'options' => array(
      'attributes' => array(
        'title' => 'Date Wizard and other tools to manage and create dates and calendars. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/date',
  );
  // Exported menu link: management:admin/config/development
  $menu_links['management:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/development/logging
  $menu_links['management:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/maintenance
  $menu_links['management:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/performance
  $menu_links['management:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/group
  $menu_links['management:admin/config/group'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group',
    'router_path' => 'admin/config/group',
    'link_title' => 'Organic groups',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer the suite of Organic groups modules.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/group/context
  $menu_links['management:admin/config/group/context'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/context',
    'router_path' => 'admin/config/group/context',
    'link_title' => 'OG context',
    'options' => array(
      'attributes' => array(
        'title' => 'OG context detection and selection',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/group/fields
  $menu_links['management:admin/config/group/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/fields',
    'router_path' => 'admin/config/group/fields',
    'link_title' => 'OG field settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Organic groups fields in bundles.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/group',
  );
  // Exported menu link: management:admin/config/group/group-membership
  $menu_links['management:admin/config/group/group-membership'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/group-membership',
    'router_path' => 'admin/config/group/group-membership',
    'link_title' => 'OG membership types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage group memberships type, including fields.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/group/permissions
  $menu_links['management:admin/config/group/permissions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/permissions',
    'router_path' => 'admin/config/group/permissions',
    'link_title' => 'OG permissions overview',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of Organic groups permissions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/group',
  );
  // Exported menu link: management:admin/config/group/permissions/node/gruppe
  $menu_links['management:admin/config/group/permissions/node/gruppe'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/permissions/node/gruppe',
    'router_path' => 'admin/config/group/permissions/node/gruppe',
    'link_title' => '',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Organic groups group type permissions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/group/permissions',
  );
  // Exported menu link: management:admin/config/group/roles
  $menu_links['management:admin/config/group/roles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/roles',
    'router_path' => 'admin/config/group/roles',
    'link_title' => 'OG roles overview',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of organic groups roles.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/group',
  );
  // Exported menu link: management:admin/config/group/roles/node/gruppe
  $menu_links['management:admin/config/group/roles/node/gruppe'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/roles/node/gruppe',
    'router_path' => 'admin/config/group/roles/node/gruppe',
    'link_title' => '',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Organic groups group type roles.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/group/roles',
  );
  // Exported menu link: management:admin/config/group/settings
  $menu_links['management:admin/config/group/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/settings',
    'router_path' => 'admin/config/group/settings',
    'link_title' => 'OG settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer OG settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/group',
  );
  // Exported menu link: management:admin/config/media
  $menu_links['management:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/media/colorbox
  $menu_links['management:admin/config/media/colorbox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/colorbox',
    'router_path' => 'admin/config/media/colorbox',
    'link_title' => 'Colorbox',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust Colorbox settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/file-system
  $menu_links['management:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/image-styles
  $menu_links['management:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/image-toolkit
  $menu_links['management:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/people
  $menu_links['management:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/people/accounts
  $menu_links['management:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/people/ip-blocking
  $menu_links['management:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/people/skype_status
  $menu_links['management:admin/config/people/skype_status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/skype_status',
    'router_path' => 'admin/config/people/skype_status',
    'link_title' => 'Skype status settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the behavior of Skype status for users.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/regional
  $menu_links['management:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/regional/date-time
  $menu_links['management:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/language
  $menu_links['management:admin/config/regional/language'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/language',
    'router_path' => 'admin/config/regional/language',
    'link_title' => 'Languages',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure languages for content and the user interface.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/settings
  $menu_links['management:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/translate
  $menu_links['management:admin/config/regional/translate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/translate',
    'router_path' => 'admin/config/regional/translate',
    'link_title' => 'Translate interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Translate the built in interface and optionally other text.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/search
  $menu_links['management:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/search/clean-urls
  $menu_links['management:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/path
  $menu_links['management:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/settings
  $menu_links['management:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/services
  $menu_links['management:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/services/aggregator
  $menu_links['management:admin/config/services/aggregator'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/aggregator',
    'router_path' => 'admin/config/services/aggregator',
    'link_title' => 'Feed aggregator',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure which content your site aggregates from other sites, how often it polls them, and how they\'re categorized.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/services/follow
  $menu_links['management:admin/config/services/follow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/follow',
    'router_path' => 'admin/config/services/follow',
    'link_title' => 'Site follow links',
    'options' => array(
      'attributes' => array(
        'title' => 'Add sitewide follow links',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/services/gauth_account
  $menu_links['management:admin/config/services/gauth_account'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/gauth_account',
    'router_path' => 'admin/config/services/gauth_account',
    'link_title' => 'Google Account Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Google Account settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/services/gauth_user
  $menu_links['management:admin/config/services/gauth_user'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/gauth_user',
    'router_path' => 'admin/config/services',
    'link_title' => 'Google Account Services Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Google Account services settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/services/gmap
  $menu_links['management:admin/config/services/gmap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/gmap',
    'router_path' => 'admin/config/services/gmap',
    'link_title' => 'GMap',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure GMap settings',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/services/rss-publishing
  $menu_links['management:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/services/twitter_profile_widget
  $menu_links['management:admin/config/services/twitter_profile_widget'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/twitter_profile_widget',
    'router_path' => 'admin/config/services/twitter_profile_widget',
    'link_title' => 'Twitter Profile Widget',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure twitter profile block',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/system
  $menu_links['management:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/system/actions
  $menu_links['management:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/cron
  $menu_links['management:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/site-information
  $menu_links['management:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/user-interface
  $menu_links['management:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/user-interface/menu-block
  $menu_links['management:admin/config/user-interface/menu-block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/menu-block',
    'router_path' => 'admin/config/user-interface/menu-block',
    'link_title' => 'Menu block',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure menu block.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/user-interface/shortcut
  $menu_links['management:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/user-interface/superfish
  $menu_links['management:admin/config/user-interface/superfish'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/superfish',
    'router_path' => 'admin/config/user-interface/superfish',
    'link_title' => 'Superfish',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Superfish Menus',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/wikitools
  $menu_links['management:admin/config/wikitools'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/wikitools',
    'router_path' => 'admin/config/wikitools',
    'link_title' => 'Wikitools',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for wiki-like behaviour.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/workflow
  $menu_links['management:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/content
  $menu_links['management:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/content/comment
  $menu_links['management:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/content',
  );
  // Exported menu link: management:admin/content/wikitools
  $menu_links['management:admin/content/wikitools'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/wikitools',
    'router_path' => 'admin/content/wikitools',
    'link_title' => 'Duplicate titles',
    'options' => array(
      'attributes' => array(
        'title' => 'List nodes which have duplicate titles',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/content',
  );
  // Exported menu link: management:admin/modules
  $menu_links['management:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/people
  $menu_links['management:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/reports
  $menu_links['management:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/reports/fields
  $menu_links['management:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/status
  $menu_links['management:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/updates
  $menu_links['management:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/views-plugins
  $menu_links['management:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/structure
  $menu_links['management:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/structure/block
  $menu_links['management:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/contact
  $menu_links['management:admin/structure/contact'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Contact form',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a system contact form and set up categories for the form to use.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/demo
  $menu_links['management:admin/structure/demo'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/demo',
    'router_path' => 'admin/structure/demo',
    'link_title' => 'Snapshots',
    'options' => array(
      'attributes' => array(
        'title' => 'Create snapshots and reset the site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/features
  $menu_links['management:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/forum
  $menu_links['management:admin/structure/forum'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/forum',
    'router_path' => 'admin/structure/forum',
    'link_title' => 'Forums',
    'options' => array(
      'attributes' => array(
        'title' => 'Control forum hierarchy settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/menu
  $menu_links['management:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/menu/manage/main-menu
  $menu_links['management:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/management
  $menu_links['management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/navigation
  $menu_links['management:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/user-menu
  $menu_links['management:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/mini-panels
  $menu_links['management:admin/structure/mini-panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/mini-panels',
    'router_path' => 'admin/structure/mini-panels',
    'link_title' => 'Mini panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete mini panels, which can be used as blocks or content panes in other panels.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/pages
  $menu_links['management:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/panels
  $menu_links['management:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/quicktabs
  $menu_links['management:admin/structure/quicktabs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/quicktabs',
    'router_path' => 'admin/structure/quicktabs',
    'link_title' => 'Quicktabs',
    'options' => array(
      'attributes' => array(
        'title' => 'Create blocks of tabbed content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/taxonomy
  $menu_links['management:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/trigger
  $menu_links['management:admin/structure/trigger'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/trigger',
    'router_path' => 'admin/structure/trigger',
    'link_title' => 'Triggers',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure when to execute actions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/types
  $menu_links['management:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/views
  $menu_links['management:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: navigation:aggregator
  $menu_links['navigation:aggregator'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'aggregator',
    'router_path' => 'aggregator',
    'link_title' => 'Feed aggregator',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
  );
  // Exported menu link: navigation:aggregator/sources
  $menu_links['navigation:aggregator/sources'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'aggregator/sources',
    'router_path' => 'aggregator/sources',
    'link_title' => 'Sources',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'aggregator',
  );
  // Exported menu link: navigation:blog
  $menu_links['navigation:blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:blog/%
  $menu_links['navigation:blog/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog/%',
    'router_path' => 'blog/%',
    'link_title' => 'My blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'blog',
  );
  // Exported menu link: navigation:book
  $menu_links['navigation:book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Books',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:calendar
  $menu_links['navigation:calendar'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Calendar',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:case-dump
  $menu_links['navigation:case-dump'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'case-dump',
    'router_path' => 'case-dump',
    'link_title' => 'Case dump',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:contact
  $menu_links['navigation:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:dropbox/files
  $menu_links['navigation:dropbox/files'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'dropbox/files',
    'router_path' => 'dropbox/files',
    'link_title' => 'Dropbox Files',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:dropbox_client/success
  $menu_links['navigation:dropbox_client/success'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'dropbox_client/success',
    'router_path' => 'dropbox_client/success',
    'link_title' => 'Dropbox Client for Drupal',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:faq-page
  $menu_links['navigation:faq-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
  );
  // Exported menu link: navigation:filter/tips
  $menu_links['navigation:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:forum
  $menu_links['navigation:forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:gauth/response_handler
  $menu_links['navigation:gauth/response_handler'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'gauth/response_handler',
    'router_path' => 'gauth/response_handler',
    'link_title' => '',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:interwiki
  $menu_links['navigation:interwiki'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'interwiki',
    'router_path' => 'interwiki',
    'link_title' => 'Wiki filter prefixes',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:locale
  $menu_links['navigation:locale'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'locale',
    'router_path' => 'locale',
    'link_title' => 'Translate strings',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:map/macro
  $menu_links['navigation:map/macro'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'map/macro',
    'router_path' => 'map/macro',
    'link_title' => 'Build a GMap macro',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:node/add
  $menu_links['navigation:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:node/add/administration
  $menu_links['navigation:node/add/administration'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/administration',
    'router_path' => 'node/add/administration',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => 'En side forbeholdt til administrative ting. Vises kun til admin. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/article
  $menu_links['navigation:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/blog
  $menu_links['navigation:node/add/blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog entry',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for multi-user blogs. Every user gets a personal blog.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/book
  $menu_links['navigation:node/add/book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Book page',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/calendarevent
  $menu_links['navigation:node/add/calendarevent'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/calendarevent',
    'router_path' => 'node/add/calendarevent',
    'link_title' => 'calendarEvent',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/carousel
  $menu_links['navigation:node/add/carousel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/carousel',
    'router_path' => 'node/add/carousel',
    'link_title' => 'Gallery',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/employee
  $menu_links['navigation:node/add/employee'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/employee',
    'router_path' => 'node/add/employee',
    'link_title' => 'Employee',
    'options' => array(
      'attributes' => array(
        'title' => 'Add staff',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/faq
  $menu_links['navigation:node/add/faq'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'A frequently asked question and its answer.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/forum
  $menu_links['navigation:node/add/forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Forum topic',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>forum topic</em> starts a new discussion thread within a forum.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/gishitest
  $menu_links['navigation:node/add/gishitest'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/gishitest',
    'router_path' => 'node/add/gishitest',
    'link_title' => 'gishitest',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/gruppe
  $menu_links['navigation:node/add/gruppe'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/gruppe',
    'router_path' => 'node/add/gruppe',
    'link_title' => 'Opret Gruppe',
    'options' => array(
      'attributes' => array(
        'title' => 'En Gruppe content type',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page
  $menu_links['navigation:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/panel
  $menu_links['navigation:node/add/panel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'attributes' => array(
        'title' => 'A panel layout broken up into rows and columns.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/partners
  $menu_links['navigation:node/add/partners'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/partners',
    'router_path' => 'node/add/partners',
    'link_title' => 'Partners',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/poll
  $menu_links['navigation:node/add/poll'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/poll',
    'router_path' => 'node/add/poll',
    'link_title' => 'Poll',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>poll</em> is a question with a set of possible responses. A <em>poll</em>, once created, automatically provides a simple running count of the number of votes received for each response.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/portfolio
  $menu_links['navigation:node/add/portfolio'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/portfolio',
    'router_path' => 'node/add/portfolio',
    'link_title' => 'Portfolio',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/services
  $menu_links['navigation:node/add/services'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/services',
    'router_path' => 'node/add/services',
    'link_title' => 'Services',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/slider
  $menu_links['navigation:node/add/slider'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/slider',
    'router_path' => 'node/add/slider',
    'link_title' => 'Slider',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to create slides in header-slider.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/todo-list
  $menu_links['navigation:node/add/todo-list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/todo-list',
    'router_path' => 'node/add/todo-list',
    'link_title' => 'TODO list',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/upload-fil
  $menu_links['navigation:node/add/upload-fil'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/upload-fil',
    'router_path' => 'node/add/upload-fil',
    'link_title' => 'Upload Fil',
    'options' => array(
      'attributes' => array(
        'title' => 'Upload filer til en gruppe',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/wiki
  $menu_links['navigation:node/add/wiki'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/wiki',
    'router_path' => 'node/add/wiki',
    'link_title' => 'Opret Wiki',
    'options' => array(
      'attributes' => array(
        'title' => 'En wiki side til dokumentation af kunde projekter m.m.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:poll
  $menu_links['navigation:poll'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'poll',
    'router_path' => 'poll',
    'link_title' => 'Polls',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:timereg
  $menu_links['navigation:timereg'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'timereg',
    'router_path' => 'timereg',
    'link_title' => 'Time registration',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:tracker
  $menu_links['navigation:tracker'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'tracker',
    'router_path' => 'tracker',
    'link_title' => 'Recent content',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
  );
  // Exported menu link: user-menu:user/login
  $menu_links['user-menu:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'user',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account settings');
  t('Actions');
  t('Add content');
  t('Administration');
  t('Appearance');
  t('Article');
  t('Available updates');
  t('Basic page');
  t('Blocks');
  t('Blog entry');
  t('Blogs');
  t('Book page');
  t('Books');
  t('Build a GMap macro');
  t('Calendar');
  t('Case dump');
  t('Clean URLs');
  t('Colorbox');
  t('Comments');
  t('Compose tips');
  t('Configuration');
  t('Contact');
  t('Contact form');
  t('Contacts');
  t('Content');
  t('Content authoring');
  t('Content types');
  t('Cron');
  t('Date API');
  t('Date Popup');
  t('Date Tools');
  t('Date and time');
  t('Development');
  t('DropBox Client Settings');
  t('Dropbox Client for Drupal');
  t('Dropbox Files');
  t('Duplicate titles');
  t('Employee');
  t('Events');
  t('FAQ');
  t('Features');
  t('Feed aggregator');
  t('Field list');
  t('File system');
  t('Forside');
  t('Forum topic');
  t('Forums');
  t('Frequently Asked Questions');
  t('GMap');
  t('Gallery');
  t('GeSHi Filter');
  t('Google Account Services Settings');
  t('Google Account Settings');
  t('Groups');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Interwiki');
  t('Languages');
  t('Log in');
  t('Log out');
  t('Logging and errors');
  t('Main menu');
  t('Maintenance mode');
  t('Management');
  t('Media');
  t('Menu block');
  t('Menus');
  t('Mini panels');
  t('Modules');
  t('My blog');
  t('Navigation');
  t('OG context');
  t('OG field settings');
  t('OG membership types');
  t('OG permissions overview');
  t('OG roles overview');
  t('OG settings');
  t('Opret Gruppe');
  t('Opret Wiki');
  t('Opret Wiki side');
  t('Organic groups');
  t('Pages');
  t('Panel');
  t('Panels');
  t('Partners');
  t('People');
  t('Performance');
  t('Poll');
  t('Polls');
  t('Portfolio');
  t('Portfolio 1 col');
  t('Portfolio 2 col');
  t('Portfolio 3 col');
  t('Quicktabs');
  t('RSS publishing');
  t('Recent content');
  t('Regional and language');
  t('Regional settings');
  t('Reports');
  t('Search');
  t('Search and metadata');
  t('Search settings');
  t('Services');
  t('Shortcuts');
  t('Site follow links');
  t('Site information');
  t('Skype status settings');
  t('Slider');
  t('Snapshots');
  t('Social Share');
  t('Sources');
  t('Status report');
  t('Structure');
  t('Superfish');
  t('System');
  t('TODO list');
  t('Taxonomy');
  t('Text formats');
  t('Time registration');
  t('Translate interface');
  t('Translate strings');
  t('Triggers');
  t('Twitter Profile Widget');
  t('URL aliases');
  t('Upload Fil');
  t('User account');
  t('User interface');
  t('User menu');
  t('Views');
  t('Views plugins');
  t('Web services');
  t('Wiki');
  t('Wiki filter prefixes');
  t('Wikitools');
  t('Workflow');
  t('Wysiwyg profiles');
  t('calendarEvent');
  t('gishitest');


  return $menu_links;
}
