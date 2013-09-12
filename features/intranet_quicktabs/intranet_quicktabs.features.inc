<?php
/**
 * @file
 * intranet_quicktabs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function intranet_quicktabs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
