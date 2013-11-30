<?php
/**
 * @file
 * ghg_eventmap.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ghg_eventmap_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in format'.
  $permissions['delete terms in format'] = array(
    'name' => 'delete terms in format',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tournament_type'.
  $permissions['delete terms in tournament_type'] = array(
    'name' => 'delete terms in tournament_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in format'.
  $permissions['edit terms in format'] = array(
    'name' => 'edit terms in format',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tournament_type'.
  $permissions['edit terms in tournament_type'] = array(
    'name' => 'edit terms in tournament_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_exif'.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_gpx'.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_json'.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_kml'.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_latlon'.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_mapquest_nominatim'.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_wkt'.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yahoo'.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yandex'.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'publish any event content'.
  $permissions['publish any event content'] = array(
    'name' => 'publish any event content',
    'roles' => array(
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable event content'.
  $permissions['publish editable event content'] = array(
    'name' => 'publish editable event content',
    'roles' => array(
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own event content'.
  $permissions['publish own event content'] = array(
    'name' => 'publish own event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any event content'.
  $permissions['unpublish any event content'] = array(
    'name' => 'unpublish any event content',
    'roles' => array(
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable event content'.
  $permissions['unpublish editable event content'] = array(
    'name' => 'unpublish editable event content',
    'roles' => array(
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own event content'.
  $permissions['unpublish own event content'] = array(
    'name' => 'unpublish own event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'event publisher' => 'event publisher',
      'staff admin' => 'staff admin',
    ),
    'module' => 'publishcontent',
  );

  return $permissions;
}
