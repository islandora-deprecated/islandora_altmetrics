<?php
/**
 * @file
 * Admin form functions for Islandora Altmetrics.
 */

/**
 * Admin form for Islandora Altmetrics.
 */
function islandora_altmetrics_admin_form($form, $form_settings) {
  $form['islandora_altmetrics_badge'] = array(
    '#type' => 'textfield',
    '#title' => t('Altmetrics Badge'),
    '#description' => t('Name of the badge style to use when displaying the Altmetrics information.'),
    '#default_value' => variable_get('islandora_altmetrics_badge', 'Default'),
  );
  $form['islandora_altmetrics_popover'] = array(
    '#type' => 'textfield',
    '#title' => t('Altmetrics Popover'),
    '#description' => t('Popover direction for extra information.'),
    '#default_value' => variable_get('islandora_altmetrics_popover', 'right'),
  );
  $form['islandora_altmetrics_doi_xpath'] = array(
    '#type' => 'textfield',
    '#title' => t('DOI XPath'),
    '#description' => t('MODS XPath for retrieving the DOI.'),
    '#default_value' => variable_get('islandora_altmetrics_doi_xpath', '/mods:mods/mods:identifier[@type="doi"]'),
  );
  return system_settings_form($form);
}
