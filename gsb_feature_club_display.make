api = 2
core = 7.x

projects[entity_view_mode][version] = 1.0-beta3
projects[entity_view_mode][subdir] = contrib

; Add context filter by query in url
projects[ctools_query_string_context][type] = module
projects[ctools_query_string_context][download][type] = git
projects[ctools_query_string_context][download][url] = http://git.drupal.org/sandbox/balint.kleri/1442298.git
projects[ctools_query_string_context][download][revision] = dc75839
projects[ctools_query_string_context][download][branch] = 7.x
projects[ctools_query_string_context][subdir] = custom/modules

; Better exposed filters for checkbox in views
projects[better_exposed_filters][version] = 3.0-beta3
projects[better_exposed_filters][subdir] = contrib

; Load more functionality for views
projects[views_load_more][type] = module
projects[views_load_more][download][type] = git
projects[views_load_more][download][url] = http://git.drupal.org/project/views_load_more.git
projects[views_load_more][download][revision] = 2f367c5
projects[views_load_more][download][branch] = 7.x-1.x
projects[views_load_more][subdir] = contrib
projects[views_load_more][patch][1923870] = http://drupal.org/files/views_load_more-adding_back_to_the_top_link_issue-1923870-2.patch
