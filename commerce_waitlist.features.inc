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

/**
 * Implements hook_default_message_type().
 */
function commerce_waitlist_default_message_type() {
  $items = array();
  $items['product_available'] = entity_import('message_type', '{
    "name" : "product_available",
    "description" : "Product available",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type_email",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "[Product] is in stock again",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[Product] is in stock again\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "message_text_subject" : { "und" : [
        {
          "value" : "[Product] is in stock again",
          "format" : null,
          "safe_value" : "[Product] is in stock again"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}