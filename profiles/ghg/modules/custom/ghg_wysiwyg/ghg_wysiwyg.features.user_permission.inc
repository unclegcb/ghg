<?php
/**
 * @file
 * ghg_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ghg_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format formatted'.
  $permissions['use text format formatted'] = array(
    'name' => 'use text format formatted',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
