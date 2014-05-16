<?php
/**
 * @file
 * address_book_js.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function address_book_js_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_address-books:admin/content/address_book
  $menu_links['management_address-books:admin/content/address_book'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/address_book',
    'router_path' => 'admin/content/address_book',
    'link_title' => 'Address books',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Address books.',
      ),
      'identifier' => 'management_address-books:admin/content/address_book',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Address books');


  return $menu_links;
}
