/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements FIFO scheduling algorithm
 *      not pre-emptive
 */
#include "../includes/scheduler_FIFO.h"

bool  Scheduler_FIFO::time_to_switch_processes(int tick_count, PCB &p){
	bool processFinished = p.remaining_cpu_time <= 0;
	if (processFinished){
		return true;
	}
	else {
		return false;
	}
}
void Scheduler_FIFO::sort(){

}

//TODO fill in content


