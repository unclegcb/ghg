<?php
/**
 * @file
 * ghg_applications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ghg_applications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ghg_applications_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ghg_applications_default_entityform_type() {
  $items = array();
  $items['2016_application'] = entity_import('entityform_type', '{
    "type" : "2016_application",
    "label" : "2017 GHG Scholarship Application",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "\\u003Cbr\\u003E", "format" : "formatted" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "\\u003Cbr\\u003E", "format" : "formatted" },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_CLOSED",
      "roles" : { "2" : "2", "4" : "4", "6" : "6", "3" : "3", "5" : "5", "1" : 0 },
      "resubmit_action" : "old",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "\\u003Cbr\\u003E", "format" : "formatted" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
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
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
