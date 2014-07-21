<?php
/**
 * @file
 * gsb_feature_gsa_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_gsa_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_appliance_autofilter';
  $strongarm->value = '1';
  $export['google_appliance_autofilter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_appliance_collection';
  $strongarm->value = 'Revamp';
  $export['google_appliance_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_appliance_frontend';
  $strongarm->value = 'quickstrike_frontend';
  $export['google_appliance_frontend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_appliance_hostname';
  $strongarm->value = 'http://search.gsb.stanford.edu';
  $export['google_appliance_hostname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_appliance_query_inspection';
  $strongarm->value = '0';
  $export['google_appliance_query_inspection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_appliance_results_per_page';
  $strongarm->value = '10';
  $export['google_appliance_results_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_appliance_search_title';
  $strongarm->value = 'Search';
  $export['google_appliance_search_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_appliance_timeout';
  $strongarm->value = '10';
  $export['google_appliance_timeout'] = $strongarm;

  return $export;
}
