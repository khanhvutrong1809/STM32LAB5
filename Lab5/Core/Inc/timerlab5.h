/*
 * timerlab5.h
 *
 *  Created on: Dec 13, 2024
 *      Author: Admin
 */

#ifndef INC_TIMERLAB5_H_
#define INC_TIMERLAB5_H_


#include "main.h"

extern int timer_cycle;
extern int timer_flag[10];
extern int timer_counter[10];
void setTimer(int index, int counter);
void clearTimer(int index);
void timerRun();


#endif /* INC_TIMERLAB5_H_ */
