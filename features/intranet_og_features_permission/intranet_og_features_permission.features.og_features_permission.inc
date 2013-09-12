<?php
/**
 * @file
 * intranet_og_features_permission.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function intranet_og_features_permission_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:gruppe:add user'
  $permissions['node:gruppe:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:administer group'
  $permissions['node:gruppe:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:approve and deny subscription'
  $permissions['node:gruppe:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:create article content'
  $permissions['node:gruppe:create article content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:create gruppe content'
  $permissions['node:gruppe:create gruppe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:create page content'
  $permissions['node:gruppe:create page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:create upload_fil content'
  $permissions['node:gruppe:create upload_fil content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:create wiki content'
  $permissions['node:gruppe:create wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete any article content'
  $permissions['node:gruppe:delete any article content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete any gruppe content'
  $permissions['node:gruppe:delete any gruppe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete any page content'
  $permissions['node:gruppe:delete any page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete any upload_fil content'
  $permissions['node:gruppe:delete any upload_fil content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete any wiki content'
  $permissions['node:gruppe:delete any wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete own article content'
  $permissions['node:gruppe:delete own article content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete own gruppe content'
  $permissions['node:gruppe:delete own gruppe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete own page content'
  $permissions['node:gruppe:delete own page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete own upload_fil content'
  $permissions['node:gruppe:delete own upload_fil content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete own wiki content'
  $permissions['node:gruppe:delete own wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:manage members'
  $permissions['node:gruppe:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:manage permissions'
  $permissions['node:gruppe:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:manage roles'
  $permissions['node:gruppe:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:subscribe'
  $permissions['node:gruppe:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:gruppe:subscribe without approval'
  $permissions['node:gruppe:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppe:unsubscribe'
  $permissions['node:gruppe:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:update any article content'
  $permissions['node:gruppe:update any article content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update any gruppe content'
  $permissions['node:gruppe:update any gruppe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update any page content'
  $permissions['node:gruppe:update any page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update any upload_fil content'
  $permissions['node:gruppe:update any upload_fil content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update any wiki content'
  $permissions['node:gruppe:update any wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update group'
  $permissions['node:gruppe:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update own article content'
  $permissions['node:gruppe:update own article content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:update own gruppe content'
  $permissions['node:gruppe:update own gruppe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:update own page content'
  $permissions['node:gruppe:update own page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:update own upload_fil content'
  $permissions['node:gruppe:update own upload_fil content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:update own wiki content'
  $permissions['node:gruppe:update own wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
