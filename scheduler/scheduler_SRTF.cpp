/*
 * SchedulerSRTF.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *
 *      implements shortest remaining time first scheduling algorithm
 *     pre-emptive
 */
#include "../includes/scheduler_SRTF.h"
//TODO fill in content

bool  Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p){
	sort();
	int nextRemainingTime = ready_q->front().remaining_cpu_time;
	int currRemainingTime = p.remaining_cpu_time;
	if (currRemainingTime >  nextRemainingTime){
		return true;
	}
	else {
		return false;
	}


}

void Scheduler_SRTF::sort(){

	std::vector<PCB> x;

	{
		x.push_back(ready_q->front());
		ready_q->pop();
	}

}
