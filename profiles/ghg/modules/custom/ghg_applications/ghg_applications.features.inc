<?php
/**
 * @file
 * ghg_applications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ghg_applications_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ghg_applications_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ghg_applications_node_info() {
  $items = array(
    'application' => array(
      'name' => t('Application'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
