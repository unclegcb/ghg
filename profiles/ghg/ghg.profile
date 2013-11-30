<?php

/**
 * Implement hook_install_tasks().
 * We hook into the install process to add our own tasks prior to Drupal's final step in the default install process.
 */

function ghg_install_tasks(){
  $taskset = array(
    'ghg_custom_install' => array(
      'display_name' => st('Thinkshout Site Setup'),
    ),
  );
  return $taskset;
}


/**
 * Post install tasks
 */
function ghg_custom_install(&$install_state) {
  // Disable DB blocks so we can use context to place everything.
  if (module_exists('block')) {
    //db_query("UPDATE {block} SET status = 0, region = ''");
  }
  drupal_flush_all_caches();
  features_revert();
}
