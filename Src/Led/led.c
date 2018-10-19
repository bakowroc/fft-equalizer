#include "led.h"

#include <stdint.h>
#include <stm32f1xx_hal.h>

void LED_Blink(uint8_t delay) {
  LED_Toggle();
  HAL_Delay(delay);
}

void LED_On(void) {
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
}

void LED_Off(void) {
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
}

void LED_Toggle(void) {
  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
}