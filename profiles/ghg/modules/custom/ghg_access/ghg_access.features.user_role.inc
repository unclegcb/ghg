<?php
/**
 * @file
 * ghg_access.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ghg_access_user_default_roles() {
  $roles = array();

  // Exported role: staff admin.
  $roles['staff admin'] = array(
    'name' => 'staff admin',
    'weight' => 2,
  );

  return $roles;
}
