<?php
/**
 * @file
 * gsb_feature_club_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_club_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'club_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Club Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_club_category_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Club Category */
  $handler->display->display_options['fields']['field_club_category']['id'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['table'] = 'field_data_field_club_category';
  $handler->display->display_options['fields']['field_club_category']['field'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['label'] = '';
  $handler->display->display_options['fields']['field_club_category']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_club_description']['id'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['table'] = 'field_data_field_club_description';
  $handler->display->display_options['fields']['field_club_description']['field'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['label'] = '';
  $handler->display->display_options['fields']['field_club_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_club_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Club Image */
  $handler->display->display_options['fields']['field_club_image']['id'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['table'] = 'field_data_field_club_image';
  $handler->display->display_options['fields']['field_club_image']['field'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['label'] = '';
  $handler->display->display_options['fields']['field_club_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_club_image']['settings'] = array(
    'image_style' => 'gsb_image_small',
    'image_link' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gsb_club' => 'gsb_club',
  );
  /* Filter criterion: Content: Club Category (field_club_category) */
  $handler->display->display_options['filters']['field_club_category_tid']['id'] = 'field_club_category_tid';
  $handler->display->display_options['filters']['field_club_category_tid']['table'] = 'field_data_field_club_category';
  $handler->display->display_options['filters']['field_club_category_tid']['field'] = 'field_club_category_tid';
  $handler->display->display_options['filters']['field_club_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['operator_id'] = 'field_club_category_tid_op';
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['label'] = 'Club Category (field_club_category)';
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['operator'] = 'field_club_category_tid_op';
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['identifier'] = 'field_club_category_tid';
  $handler->display->display_options['filters']['field_club_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_club_category_tid']['vocabulary'] = 'panopoly_categories';

  /* Display: club-list */
  $handler = $view->new_display('panel_pane', 'club-list', 'club_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-club-filters designed-box';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['waypoint']['infinite'] = 0;
  $handler->display->display_options['pager']['options']['more_button_text'] = 'show more';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Club Category */
  $handler->display->display_options['fields']['field_club_category']['id'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['table'] = 'field_data_field_club_category';
  $handler->display->display_options['fields']['field_club_category']['field'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['label'] = '';
  $handler->display->display_options['fields']['field_club_category']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_club_description']['id'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['table'] = 'field_data_field_club_description';
  $handler->display->display_options['fields']['field_club_description']['field'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['label'] = '';
  $handler->display->display_options['fields']['field_club_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_club_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Club Image */
  $handler->display->display_options['fields']['field_club_image']['id'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['table'] = 'field_data_field_club_image';
  $handler->display->display_options['fields']['field_club_image']['field'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['label'] = '';
  $handler->display->display_options['fields']['field_club_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_club_image']['settings'] = array(
    'image_style' => 'gsb_image_small',
    'image_link' => '',
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gsb_club' => 'gsb_club',
  );
  /* Filter criterion: Content: Club Category (field_club_category) */
  $handler->display->display_options['filters']['field_club_category_tid']['id'] = 'field_club_category_tid';
  $handler->display->display_options['filters']['field_club_category_tid']['table'] = 'field_data_field_club_category';
  $handler->display->display_options['filters']['field_club_category_tid']['field'] = 'field_club_category_tid';
  $handler->display->display_options['filters']['field_club_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['operator_id'] = 'field_club_category_tid_op';
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['label'] = 'Filter by';
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['operator'] = 'field_club_category_tid_op';
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['identifier'] = 'field_club_category_tid';
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_club_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_club_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_club_category_tid']['vocabulary'] = 'panopoly_categories';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: clubs-by-tag */
  $handler = $view->new_display('panel_pane', 'clubs-by-tag', 'clubs_by_tag');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All clubs';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'club-search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Club Category (field_club_category) */
  $handler->display->display_options['arguments']['field_club_category_tid']['id'] = 'field_club_category_tid';
  $handler->display->display_options['arguments']['field_club_category_tid']['table'] = 'field_data_field_club_category';
  $handler->display->display_options['arguments']['field_club_category_tid']['field'] = 'field_club_category_tid';
  $handler->display->display_options['arguments']['field_club_category_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_club_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_club_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_club_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_club_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_club_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_club_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_club_category_tid']['validate_options']['vocabularies'] = array(
    'panopoly_categories' => 'panopoly_categories',
  );
  $handler->display->display_options['arguments']['field_club_category_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gsb_club' => 'gsb_club',
  );
  $handler->display->display_options['pane_category']['name'] = 'GSB panes';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: clubs-by-id */
  $handler = $view->new_display('panel_pane', 'clubs-by-id', 'clubs_by_id');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'gsb_club' => 'gsb_club',
  );
  $handler->display->display_options['pane_category']['name'] = 'GSB Panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.field_file_image_alt_text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Nid: ',
    ),
  );
  $export['club_filters'] = $view;

  $view = new view();
  $view->name = 'search_clubs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_club_index';
  $view->human_name = 'Search Clubs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search club';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
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
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no clubs found';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_club_description']['id'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_club_description']['field'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['label'] = '';
  $handler->display->display_options['fields']['field_club_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_club_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Indexed Node: Club Category */
  $handler->display->display_options['fields']['field_club_category']['id'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_club_category']['field'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['label'] = '';
  $handler->display->display_options['fields']['field_club_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_category']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_club_category']['view_mode'] = 'full';
  /* Field: Indexed Node: Club Image */
  $handler->display->display_options['fields']['field_club_image']['id'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_club_image']['field'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['label'] = '';
  $handler->display->display_options['fields']['field_club_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_club_image']['type'] = 'fancybox';
  $handler->display->display_options['fields']['field_club_image']['settings'] = array(
    'fancybox_image_style_content' => 'gsb_image_small',
    'fancybox_image_style_fancybox' => 'large',
    'fancybox_gallery' => 'post',
    'fancybox_gallery_custom' => '',
    'fancybox_caption' => 'auto',
    'fancybox_caption_custom' => '',
  );
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: search-clubs-list */
  $handler = $view->new_display('panel_pane', 'search-clubs-list', 'club_search');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-club-filters designed-box';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['waypoint']['infinite'] = 0;
  $handler->display->display_options['pager']['options']['more_button_text'] = 'show more';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_club_description']['id'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_club_description']['field'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['label'] = '';
  $handler->display->display_options['fields']['field_club_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_club_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Indexed Node: Club Category */
  $handler->display->display_options['fields']['field_club_category']['id'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_club_category']['field'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['label'] = '';
  $handler->display->display_options['fields']['field_club_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_category']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_club_category']['view_mode'] = 'full';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['inherit_panels_path'] = '0';
  $export['search_clubs'] = $view;

  return $export;
}
