<?php
/**
 * @file
 * ghg_eventmap.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ghg_eventmap_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gamers Helping Gamers Find Tourneys';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_date_time_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_date_time_value2' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_format_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geolocation';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = '#rendered_entity';
  $handler->display->display_options['style_options']['view_mode'] = 'teaser';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Header: Entity: Rendered entity */
  $handler->display->display_options['header']['entity']['id'] = 'entity';
  $handler->display->display_options['header']['entity']['table'] = 'entity__global';
  $handler->display->display_options['header']['entity']['field'] = 'entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geolocation']['settings'] = array(
    'data' => 'full',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Format (field_format) */
  $handler->display->display_options['filters']['field_format_tid']['id'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['table'] = 'field_data_field_format';
  $handler->display->display_options['filters']['field_format_tid']['field'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['value'] = '';
  $handler->display->display_options['filters']['field_format_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator_id'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['identifier'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_format_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_format_tid']['vocabulary'] = 'format';
  $handler->display->display_options['filters']['field_format_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Date -  start date (field_date_time) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_time_value']['expose']['operator_id'] = 'field_date_time_value_op';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['operator'] = 'field_date_time_value_op';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['identifier'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_date_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_time_value']['default_date'] = 'today()';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date_time) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_time_value']['expose']['operator_id'] = 'field_date_time_value_op';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['label'] = 'From';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['operator'] = 'field_date_time_value_op';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['identifier'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_time_value']['default_date'] = 'today()';
  $handler->display->display_options['filters']['field_date_time_value']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Date - end date (field_date_time:value2) */
  $handler->display->display_options['filters']['field_date_time_value2']['id'] = 'field_date_time_value2';
  $handler->display->display_options['filters']['field_date_time_value2']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['filters']['field_date_time_value2']['field'] = 'field_date_time_value2';
  $handler->display->display_options['filters']['field_date_time_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_time_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_time_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_time_value2']['expose']['operator_id'] = 'field_date_time_value2_op';
  $handler->display->display_options['filters']['field_date_time_value2']['expose']['label'] = 'To';
  $handler->display->display_options['filters']['field_date_time_value2']['expose']['operator'] = 'field_date_time_value2_op';
  $handler->display->display_options['filters']['field_date_time_value2']['expose']['identifier'] = 'field_date_time_value2';
  $handler->display->display_options['filters']['field_date_time_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_time_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_time_value2']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Format (field_format) */
  $handler->display->display_options['filters']['field_format_tid']['id'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['table'] = 'field_data_field_format';
  $handler->display->display_options['filters']['field_format_tid']['field'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['value'] = array(
    7 => '7',
    6 => '6',
    8 => '8',
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_format_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_format_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator_id'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['identifier'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_format_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_format_tid']['group_info']['label'] = 'Format (field_format)';
  $handler->display->display_options['filters']['field_format_tid']['group_info']['identifier'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_format_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_format_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_format_tid']['vocabulary'] = 'format';
  $handler->display->display_options['filters']['field_format_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    9 => '9',
    12 => '12',
    10 => '10',
    11 => '11',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'tournament_type';
  $handler->display->display_options['path'] = 'eventmap';
  $export['event_map'] = $view;

  return $export;
}
