<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_external_polls_user_default_roles() {
  $roles = array();

  // Exported role: poll admin
  $roles['poll admin'] = array(
    'name' => 'poll admin',
  );

  return $roles;
}
