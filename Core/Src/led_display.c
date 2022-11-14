/*
 * led_display.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Asus
 */


#include "main.h"
#include "led_display.h"
#include "trafficLight.h"
void display7SEG1(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, GPIO_PIN_RESET);
		break;
	}


}

void display7SEG2(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, GPIO_PIN_RESET);
		break;
	}
}

void update7SEG1( int index, int time ) {
 switch ( index ) {
	 case 0:
	 // Display the first 7 SEG with led_buffer [0]
		 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,  GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,  GPIO_PIN_SET);
		 display7SEG1(time/10);
		 break ;
	 case 1:
	 // Display the second 7 SEG with led_buffer [1]
		 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,  GPIO_PIN_SET);
		 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,  GPIO_PIN_RESET);
		 display7SEG1(time%10);
		 break ;
	 default :
		 break ;
	 }
 }

void update7SEG2(int index, int time) {
 switch (index){
	 case 0:
		 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,  GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,  GPIO_PIN_SET);
		 display7SEG2(time/10);
		 break ;
	 case 1:
		 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,  GPIO_PIN_SET);
		 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,  GPIO_PIN_RESET);
		 display7SEG2(time%10);
		 break ;
	 default :
		 break ;
	 }
 }
