<?php
/**
 * @file
 * commerce_waitlist.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function commerce_waitlist_flag_default_flags() {
  $flags = array();
  // Exported flag: "Waitlist".
  $flags['waitlist'] = array(
    'entity_type' => 'commerce_product',
    'title' => 'Waitlist',
    'global' => '0',
    'types' => array(),
    'flag_short' => 'Add to waitlist',
    'flag_long' => 'You will be notified as [product:title] becomes available again.  ',
    'flag_message' => '[product:title] added to your waitlist.',
    'unflag_short' => 'Remove from waitlist',
    'unflag_long' => 'Remove [product:title] from your waitlist.',
    'unflag_message' => '[product:title] removed from your waitlist.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_entity' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'api_version' => 2,
    'module' => 'commerce_waitlist',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}
