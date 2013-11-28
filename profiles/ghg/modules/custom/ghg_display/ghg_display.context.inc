<?php
/**
 * @file
 * ghg_display.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ghg_display_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-home-block_1' => array(
          'module' => 'views',
          'delta' => 'home-block_1',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'header',
          'weight' => '-9',
        ),
        'ghg_basic_content_types-donate' => array(
          'module' => 'ghg_basic_content_types',
          'delta' => 'donate',
          'region' => 'footer',
          'weight' => '-13',
        ),
        'ghg_basic_content_types-footer' => array(
          'module' => 'ghg_basic_content_types',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-12',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
