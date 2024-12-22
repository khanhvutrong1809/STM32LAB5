/*
 * timerlab5.c
 *
 *  Created on: Dec 13, 2024
 *      Author: Admin
 */

#include "timerlab5.h"

int timer_flag[10];
int timer_counter[10];
int timer_cycle = 10;
void setTimer(int index, int counter) {
	timer_flag[index] = 0;
	timer_counter[index] = counter / timer_cycle;
}
void clearTimer(int index) {
	timer_counter[index] = 0;
	timer_flag[index] = 0;
}
void timerRun() {
	for (int i = 0; i < 10; i++) {
		if (timer_counter[i] > 0) {
			timer_counter[i]--;
		} else {
			timer_flag[i] = 1;
		}
	}
}
