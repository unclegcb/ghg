<?php
/**
 * @file
 * ghg_eventmap.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ghg_eventmap_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_map';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'event_map' => 'event_map',
        'event_map:page' => 'event_map:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-event_map-page' => array(
          'module' => 'views',
          'delta' => '-exp-event_map-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['event_map'] = $context;

  return $export;
}
