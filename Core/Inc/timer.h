/*
 * timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Asus
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

void setTimer0(int duration);	// create 1 second flag
void setTimer1(int duration);	// create 0.5 second flag
void setTimer2(int duration);	// create flag for auto Increase
void timer_run();

#endif /* INC_TIMER_H_ */
