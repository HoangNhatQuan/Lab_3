/*
 * input_reading.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Asus
 */


# include "main.h" // we aim to work with more than one buttons
# include "input_reading.h"
# include "global.h"

# define N0_OF_BUTTONS 	4
# define DURATION_FOR_AUTO_INCREASING 	100
# define BUTTON_IS_PRESSED 		GPIO_PIN_RESET
# define BUTTON_IS_RELEASED 	GPIO_PIN_SET

static GPIO_PinState buttonBuffer[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer1[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[N0_OF_BUTTONS];

static uint8_t flagForButtonPress1s[N0_OF_BUTTONS];
static uint16_t counterForButtonPress1s[N0_OF_BUTTONS];

GPIO_PinState readPin(int button) {
	 GPIO_PinState state;
	 switch(button) {
	 	 case 0: state = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin); break;
	 	 case 1: state = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin); break;
	 	 case 2: state = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin); break;
	 	 case 3: state = HAL_GPIO_ReadPin(BUTTON_4_GPIO_Port, BUTTON_4_Pin); break;
	 	 default: break;
	 }
	 return state;
}
void button_reading(void) {
	 for(int i = 0; i < N0_OF_BUTTONS ; i++) {
		 debounceButtonBuffer2 [i] = debounceButtonBuffer1[i];
		 debounceButtonBuffer1 [i] = readPin (i);
		 if(debounceButtonBuffer1[i] == debounceButtonBuffer2[i])
			 	 buttonBuffer [i] = debounceButtonBuffer1[i];
		 if(buttonBuffer[i] == GPIO_PIN_RESET) {
			 // if a button is pressed , we start counting
			 if(counterForButtonPress1s[i] < DURATION_FOR_AUTO_INCREASING) {
				 	 counterForButtonPress1s[i]++;
			 }else{
				 	 // the flag is turned on when 1 second has passed
				 	 // since the button is pressed .
				 	 flagForButtonPress1s[i] = 1;
			 }
		 }else{
			 counterForButtonPress1s[i] = 0;
			 flagForButtonPress1s[i] = 0;
		 }
	 }
}

int is_button_pressed(int index) {
	if( index >= N0_OF_BUTTONS ) return 0;
	if( buttonBuffer [ index ] == GPIO_PIN_RESET ) return 1;
	else return 0;
}

int is_button_pressed_1s(int index) {
	if(index >= N0_OF_BUTTONS) return 0 ;
	if(flagForButtonPress1s[index] == 1) return 1;
	else return 0;
}


