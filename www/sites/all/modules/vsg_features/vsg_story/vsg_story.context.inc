<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function vsg_story_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vsg_stories';
  $context->description = 'story';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'story' => 'story',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'stories' => 'stories',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stoiry_list-block_1' => array(
          'module' => 'views',
          'delta' => 'stoiry_list-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('story');

  $export['vsg_stories'] = $context;
  return $export;
}
