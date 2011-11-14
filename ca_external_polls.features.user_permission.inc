<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_external_polls_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_external_poll content
  $permissions['create ca_external_poll content'] = array(
    'name' => 'create ca_external_poll content',
    'roles' => array(
      '0' => 'poll admin',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete any ca_external_poll content
  $permissions['delete any ca_external_poll content'] = array(
    'name' => 'delete any ca_external_poll content',
    'roles' => array(
      '0' => 'poll admin',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete own ca_external_poll content
  $permissions['delete own ca_external_poll content'] = array(
    'name' => 'delete own ca_external_poll content',
    'roles' => array(
      '0' => 'poll admin',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit any ca_external_poll content
  $permissions['edit any ca_external_poll content'] = array(
    'name' => 'edit any ca_external_poll content',
    'roles' => array(
      '0' => 'poll admin',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit own ca_external_poll content
  $permissions['edit own ca_external_poll content'] = array(
    'name' => 'edit own ca_external_poll content',
    'roles' => array(
      '0' => 'poll admin',
      '1' => 'webmaster',
    ),
  );

  return $permissions;
}
