Commerce Waitlist
=================

Waitlist is an add-on to Drupal Commerce that uses the Commerce Stock and Flag
modules to allow adding products to a "waitlist" when they're not available.

As a waitlisted product becomes available again, an email will be sent to users
who added the product into their waiting list. This notification will only be
sent once, but the flagging will remain; So users will be able to maintain their
waitlists on their profiles.


Using Waitlist
--------------
The waitlist module only affects products with available stock tracking; Enable
stock tracking on desired product types under "admin/commerce/config/stock/ss".

When viewing an add-to-cart form on a node page which references (Using
product-reference) a product with a stock set to zero, a link for adding the
product to the waitlist will appear on the form and the add-to-cart button will
be disabled.

The products added to the user's waitlist will be listed under
"user/%/waitlist".
