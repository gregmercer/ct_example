<?php

/**
 * Multiple operation plugin.
 *
 * We do not inherit 'example_operation' so it should NOT work.
 */

class ct_example_multiple_operation extends ct_example_operation {
  public function calculate() {
    return $this->a * $this->b;
  }

  public function resultMessage() {
    return t('Multiply !argument_a on !argument_b is !result.', array(
      '!argument_a' => $this->a,
      '!argument_b' => $this->b,
      '!result' => $this->calculate(),
    ));
  }
}