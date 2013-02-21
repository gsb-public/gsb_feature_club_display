<?php
/**
 * @file
 * gsb_feature_club_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_club_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gsb_feature_club_display_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_strongarm_alter().
 */
function gsb_feature_club_display_strongarm_alter(&$data) {
  if (isset($data['panels_page_allowed_types'])) {
    $data['panels_page_allowed_types']->value['custom-custom'] = 'custom-custom'; /* WAS: 0 */
  }
  if (isset($data['panels_page_default'])) {
    $data['panels_page_default']->value['custom'] = 'custom'; /* WAS: 0 */
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function gsb_feature_club_display_default_search_api_index() {
  $items = array();
  $items['club_index'] = entity_import('search_api_index', '{
    "name" : "Club Index",
    "machine_name" : "club_index",
    "description" : "Index all clubs",
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "type" : { "type" : "string" },
        "title" : { "type" : "string", "boost" : "8.0" },
        "field_club_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_club_description" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text", "boost" : "8.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "gsb_club" : "gsb_club" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "title-search",
                "type" : "fulltext",
                "fields" : [ "title" ],
                "description" : "A Fulltext aggregation of the following fields: Title."
              }
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_club_description" : true,
              "search_api_aggregation_1" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "field_club_description" : true, "search_api_aggregation_1" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_club_description" : true, "search_api_aggregation_1" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_club_description" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
