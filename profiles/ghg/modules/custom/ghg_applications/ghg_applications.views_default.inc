<?php
/**
 * @file
 * ghg_applications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ghg_applications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = '2015_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '2015 Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '2015 Applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'value_1' => 'value_1',
    'expression' => 'expression',
    'value' => 'value',
  );
  $handler->display->display_options['style_options']['default'] = 'value';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['label'] = 'Vote count';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'rating',
    'function' => 'count',
  );
  /* Relationship: Content: Votes */
  $handler->display->display_options['relationships']['votingapi_vote']['id'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['votingapi_vote']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_vote']['field'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['votingapi_vote']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'rating',
  );
  $handler->display->display_options['relationships']['votingapi_vote']['current_user'] = TRUE;
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_1']['id'] = 'votingapi_cache_1';
  $handler->display->display_options['relationships']['votingapi_cache_1']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_1']['field'] = 'votingapi_cache';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Votes: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_vote';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_vote';
  $handler->display->display_options['fields']['value_1']['label'] = 'Your Raw Rating';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['text'] = '[value_1]/20';
  $handler->display->display_options['fields']['value_1']['precision'] = '0';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Your Rating';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[value_1]/20';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = 'Number of Votes';
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'application' => 'application',
  );
  /* Filter criterion: Content: Submission Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Submitted' => 'Submitted',
  );
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Votes: Value */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'votingapi_vote';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['relationship'] = 'votingapi_vote';
  $handler->display->display_options['filters']['value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['operator_id'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['label'] = 'Value';
  $handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['identifier'] = 'value';
  $handler->display->display_options['filters']['value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['value']['group_info']['label'] = 'Filter my work:';
  $handler->display->display_options['filters']['value']['group_info']['identifier'] = 'myvote';
  $handler->display->display_options['filters']['value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'I have not rated',
      'operator' => 'empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'I have rated',
      'operator' => 'not empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Vote results: Value */
  $handler->display->display_options['filters']['value_1']['id'] = 'value_1';
  $handler->display->display_options['filters']['value_1']['table'] = 'votingapi_cache';
  $handler->display->display_options['filters']['value_1']['field'] = 'value';
  $handler->display->display_options['filters']['value_1']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['filters']['value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['operator_id'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['label'] = 'Number of Votes';
  $handler->display->display_options['filters']['value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['operator'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['identifier'] = 'value_1';
  $handler->display->display_options['filters']['value_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['value_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['value_1']['group_info']['label'] = 'Number of Votes';
  $handler->display->display_options['filters']['value_1']['group_info']['identifier'] = 'value_1';
  $handler->display->display_options['filters']['value_1']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['value_1']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['value_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'None',
      'operator' => 'empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '1',
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '2',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => '3 or more',
      'operator' => '>',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: 2015 Applicants */
  $handler = $view->new_display('page', '2015 Applicants', 'page');
  $handler->display->display_options['path'] = 'admin/2015-applications';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '2015 Applications';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: 2015 Tallies */
  $handler = $view->new_display('page', '2015 Tallies', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'value_1' => 'value_1',
    'expression' => 'expression',
    'value' => 'value',
    'value_2' => 'value_2',
    'expression_1' => 'expression_1',
  );
  $handler->display->display_options['style_options']['default'] = 'value_2';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Votes: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_vote';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_vote';
  $handler->display->display_options['fields']['value_1']['label'] = 'Your Raw Rating';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['text'] = '[value_1]/20';
  $handler->display->display_options['fields']['value_1']['precision'] = '0';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Your Rating';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[value_1]/20';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = 'Number of Votes';
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['relationship'] = 'votingapi_cache_1';
  $handler->display->display_options['fields']['value_2']['label'] = 'Average Rating';
  $handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_2']['precision'] = '0';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Average Rating';
  $handler->display->display_options['fields']['expression_1']['precision'] = '0';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[value_2]/20';
  $handler->display->display_options['path'] = 'admin/2015-results';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '2015 Voting Results';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['2015_applications'] = $view;

  return $export;
}
