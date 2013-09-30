<?php
/**
 * @file
 * ghg_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ghg_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: formatted.
  $formats['formatted'] = array(
    'format' => 'formatted',
    'name' => 'formatted',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
