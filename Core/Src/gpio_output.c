/*
 * gpio_output.c
 *
 *  Created on: Feb 11, 2026
 *      Author: bossx918spy
 */

#include "gpio_output.h"

void GPIO_Output_Init(void)
{
    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef gpio = {0};
    gpio.Pin = GPIO_PIN_14;
    gpio.Mode = GPIO_MODE_OUTPUT_PP;
    gpio.Pull = GPIO_NOPULL;
    gpio.Speed = GPIO_SPEED_FREQ_LOW;

    HAL_GPIO_Init(GPIOB, &gpio);

    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);
}

void GPIO_Output_Toggle(void)
{
    HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_14);
}
