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

  // Exported role: ghg board.
  $roles['ghg board'] = array(
    'name' => 'ghg board',
    'weight' => 3,
  );

  // Exported role: megauser.
  $roles['megauser'] = array(
    'name' => 'megauser',
    'weight' => 5,
  );

  // Exported role: staff admin.
  $roles['staff admin'] = array(
    'name' => 'staff admin',
    'weight' => 3,
  );

  return $roles;
}
