<?php

/**
 * Divide operation plugin.
 */

class ct_example_divide_operation extends ct_example_operation {
  public function validate() {
    if (empty($this->b)) {
      form_set_error('number_b', t('Can\'t divide by zero!'));
    }
  }

  public function calculate() {
    return $this->a / $this->b;
  }

  public function resultMessage() {
    return t('!argument_a divided by !argument_b is !result.', array(
      '!argument_a' => $this->a,
      '!argument_b' => $this->b,
      '!result' => $this->calculate(),
    ));
  }
}