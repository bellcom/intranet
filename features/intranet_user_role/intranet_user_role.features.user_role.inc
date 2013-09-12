<?php
/**
 * @file
 * intranet_user_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function intranet_user_role_user_default_roles() {
  $roles = array();

  // Exported role: Administration.
  $roles['Administration'] = array(
    'name' => 'Administration',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
