#include "button.h"

#include <stm32f1xx_hal_gpio.h>
#include <stdbool.h>

bool BTN_IS_ON(void) {
  return HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);
}

bool BTN_IS_OFF(void) {
  return !HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);
}