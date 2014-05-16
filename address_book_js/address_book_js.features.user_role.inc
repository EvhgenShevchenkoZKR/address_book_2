<?php
/**
 * @file
 * address_book_js.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function address_book_js_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
