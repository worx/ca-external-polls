<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_external_polls_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ca_external_poll';
  $strongarm->value = 0;
  $export['comment_anonymous_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_external_poll';
  $strongarm->value = '0';
  $export['comment_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ca_external_poll';
  $strongarm->value = '3';
  $export['comment_controls_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_external_poll';
  $strongarm->value = '4';
  $export['comment_default_mode_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ca_external_poll';
  $strongarm->value = '1';
  $export['comment_default_order_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ca_external_poll';
  $strongarm->value = '50';
  $export['comment_default_per_page_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ca_external_poll';
  $strongarm->value = '0';
  $export['comment_form_location_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ca_external_poll';
  $strongarm->value = '1';
  $export['comment_preview_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ca_external_poll';
  $strongarm->value = '1';
  $export['comment_subject_field_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_external_poll';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '0',
    'path' => '4',
  );
  $export['content_extra_weights_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_external_poll';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ca_external_poll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_external_poll_pattern';
  $strongarm->value = 'polls/[title-raw]';
  $export['pathauto_node_ca_external_poll_pattern'] = $strongarm;

  return $export;
}
