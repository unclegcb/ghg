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

  // Exported permission: grant content access.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(),
    'module' => 'content_access',
  );

  // Exported permission: grant own content access.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(),
    'module' => 'content_access',
  );

  // Exported permission: use text format formatted.
  $permissions['use text format formatted'] = array(
    'name' => 'use text format formatted',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'staff admin' => 'staff admin',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
