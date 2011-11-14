<?php

/**
 * Define the function ca_external_polls_admin_settings_form().
 *
 * This function will create the admin settings page.
 */
function ca_external_polls_admin_settings_form() {
  $form = array();

  $form['ca_external_polls_list'] = array(
    '#type' => 'select',
    '#title' => t('External Poll\'s List Template'),
    '#options' => array(
      'ca_external_polls_list_template_one' => t('Template One'),
      'ca_external_polls_list_template_two' => t('Template Two'),
      'ca_external_polls_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_external_polls_list_template', 'ca_external_polls_list_template_one'),
    '#required' => TRUE,
  );
  $form['ca_external_polls_node'] = array(
    '#type' => 'select',
    '#title' => t('External Poll\'s Node Template'),
    '#options' => array(
      'ca_external_polls_node_template_one' => t('Template One'),
      'ca_external_polls_node_template_two' => t('Template Two'),
      'ca_external_polls_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_external_polls_node_template', 'ca_external_polls_node_template_one'),
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_external_polls_admin_settings_form_submit'),
  );

  return $form;
}

/*
 * Define the function ca_external_polls_admin_settings_form_submit().
 *
 * This function will save the admin settings page.
 */
function ca_external_polls_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_external_polls_list_template', $form_state['values']['ca_external_polls_list']);
  variable_set('ca_external_polls_node_template', $form_state['values']['ca_external_polls_node']);
  drupal_set_message('Configuration has been saved.');
}
