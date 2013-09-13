<?php
/**
 * @file
 * ghg_applications.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ghg_applications_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Apply',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
  );
  // Exported menu link: main-menu:user/applications
  $menu_links['main-menu:user/applications'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/applications',
    'router_path' => 'user/applications',
    'link_title' => 'Your Application',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Apply');
  t('Your Application');


  return $menu_links;
}
