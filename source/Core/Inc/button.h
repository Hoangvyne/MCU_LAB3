/*
 * button.h
 *
 *  Created on: 22 thg 10, 2024
 *      Author: Hoang Vy
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"
#include "control_7SEG.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton_BUT1_Pressed();
int isButton_BUT2_Pressed();
int isButton_BUT3_Pressed();


int isButton_BUT1_LongPressed();
int isButton_BUT2_LongPressed();
int isButton_BUT3_LongPressed();


#endif /* INC_BUTTON_H_ */