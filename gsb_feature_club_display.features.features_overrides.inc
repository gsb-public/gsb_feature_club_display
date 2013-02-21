<?php
/**
 * @file
 * gsb_feature_club_display.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function gsb_feature_club_display_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.panels_page_allowed_types.value|custom-custom"] = 'custom-custom';
  $overrides["variable.panels_page_default.value|custom"] = 'custom';

 return $overrides;
}
