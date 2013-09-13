<?php
/**
 * @file
 * ghg_applications.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ghg_applications_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-application-field_essay_1'
  $field_instances['node-application-field_essay_1'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Personal statement that touches on: (1) your background in magic, the role magic has had in your life, and why you would be a good recipient; and (2) your future academic and career goals.',
    'display' => array(
      'brief' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_essay_1',
    'label' => 'Essay 1',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-application-field_essay_2'
  $field_instances['node-application-field_essay_2'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is your favorite magic card or mechanic and why?',
    'display' => array(
      'brief' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_essay_2',
    'label' => 'Essay 2',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-application-field_essay_3'
  $field_instances['node-application-field_essay_3'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is your least favorite magic card or mechanic and why?',
    'display' => array(
      'brief' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_essay_3',
    'label' => 'Essay 3',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-application-field_fafsa'
  $field_instances['node-application-field_fafsa'] = array(
    'bundle' => 'application',
    'deleted' => 0,
    'description' => 'Upload a PDF copy of your Student Aid Report from the <a href="http://www.fafsa.ed.gov/">Free Application for Federal Student Aid (FAFSA)</a>.',
    'display' => array(
      'brief' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fafsa',
    'label' => 'Student Aid Report',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'apps/fafsa',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-application-field_mtg_achievements'
  $field_instances['node-application-field_mtg_achievements'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'brief' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mtg_achievements',
    'label' => 'What are some of your Magic Achievements?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-application-field_sat_act_score'
  $field_instances['node-application-field_sat_act_score'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optional',
    'display' => array(
      'brief' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sat_act_score',
    'label' => 'SAT/ACT Score',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-application-field_status'
  $field_instances['node-application-field_status'] = array(
    'bundle' => 'application',
    'default_value' => array(
      0 => array(
        'value' => 'Incomplete',
      ),
    ),
    'deleted' => 0,
    'description' => 'Your application will not be submitted until you change this field to "submitted" and Save.',
    'display' => array(
      'brief' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Submission Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-application-field_transcript'
  $field_instances['node-application-field_transcript'] = array(
    'bundle' => 'application',
    'deleted' => 0,
    'description' => 'Upload a transcript in PDF format. If you need to upload multiple transcripts for any reason, you may add another field here.',
    'display' => array(
      'brief' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_transcript',
    'label' => 'High School Transcript',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'apps/transcripts',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Essay 1');
  t('Essay 2');
  t('Essay 3');
  t('High School Transcript');
  t('Optional');
  t('Personal statement that touches on: (1) your background in magic, the role magic has had in your life, and why you would be a good recipient; and (2) your future academic and career goals.');
  t('SAT/ACT Score');
  t('Student Aid Report');
  t('Submission Status');
  t('Upload a PDF copy of your Student Aid Report from the <a href="http://www.fafsa.ed.gov/">Free Application for Federal Student Aid (FAFSA)</a>.');
  t('Upload a transcript in PDF format. If you need to upload multiple transcripts for any reason, you may add another field here.');
  t('What are some of your Magic Achievements?');
  t('What is your favorite magic card or mechanic and why?');
  t('What is your least favorite magic card or mechanic and why?');
  t('Your application will not be submitted until you change this field to "submitted" and Save.');

  return $field_instances;
}
