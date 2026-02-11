/*
 * gpio_output.h
 *
 *  Created on: Feb 11, 2026
 *      Author: bossx918spy
 */

#ifndef INC_GPIO_OUTPUT_H_
#define INC_GPIO_OUTPUT_H_

#ifndef GPIO_OUTPUT_H
#define GPIO_OUTPUT_H

#include "stm32l4xx_hal.h"

void GPIO_Output_Init(void);
void GPIO_Output_Toggle(void);

#endif

#endif /* INC_GPIO_OUTPUT_H_ */
