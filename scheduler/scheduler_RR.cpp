/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */
#include "../includes/scheduler_RR.h"

bool Scheduler_RR::time_to_switch_processes(int tick_count, PCB &p){

	int timeRemaining = p.required_cpu_time - p.remaining_cpu_time;
	int switchTime = timeRemaining % time_slice;
	if (p.remaining_cpu_time <= 0 || switchTime == 0){
		return true;
	}
	else {
		return false;
	}


}

void Scheduler_RR::sort(){

}


