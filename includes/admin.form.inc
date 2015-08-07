<?php
/**
 * @file
 * Admin form functions for Islandora Altmetrics.
 */

/**
 * Admin form for Islandora Altmetrics.
 */
function islandora_altmetrics_admin_form($form, $form_settings) {
  $form['islandor_altmetrics_badge'] = array(
    '#type' => 'textfield',
    '#title' => t('Altmetrics Badge'),
    '#description' => t('Name of the badge to use when displaying the Altmetrics block.'),
    '#default_value' => variable_get('islandor_altmetrics_badge', '4'),
  );
  return system_settings_form($form);
}
