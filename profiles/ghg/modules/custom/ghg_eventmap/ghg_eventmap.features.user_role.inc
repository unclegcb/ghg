<?php
/**
 * @file
 * ghg_eventmap.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ghg_eventmap_user_default_roles() {
  $roles = array();

  // Exported role: event publisher.
  $roles['event publisher'] = array(
    'name' => 'event publisher',
    'weight' => 2,
  );

  return $roles;
}
