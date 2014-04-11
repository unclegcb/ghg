<?php
/**
 * @file
 * ghg_wysiwyg.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ghg_wysiwyg_user_default_roles() {
  $roles = array();

  // Exported role: ghg board.
  $roles['ghg board'] = array(
    'name' => 'ghg board',
    'weight' => 2,
  );

  return $roles;
}
