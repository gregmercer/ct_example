<?php

/**
 * Operation plugin for Example module.
 *
 * Calculate sum of two numbers.
 */

$plugin = array(
  'label' => t('Sum'),
  'handler' => array(
    'class' => 'ct_example_sum_operation',
  ),
);

class ct_example_sum_operation extends ct_example_operation {
  public function calculate() {
    return $this->a + $this->b;
  }
}