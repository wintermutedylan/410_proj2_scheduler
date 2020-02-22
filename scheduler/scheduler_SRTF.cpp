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
	if (currRemainingTime > nextRemainingTime){
		return true;
	}
	else if (currRemainingTime <= 0){
			return true;
	}
	else {
		return false;
	}


}

void Scheduler_SRTF::sort(){
	PCB temp;
	std::vector<PCB> x;
	while (ready_q->empty() != true){
		x.push_back(ready_q->front());
		ready_q->pop();
	}
	for (int i = 0; i < x.size(); i++){
		for (int j = i + 1; j < x.size(); j++){
			if (x[i].remaining_cpu_time > x[j].remaining_cpu_time){
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	for (int k = 0; k < x.size(); k++){
		ready_q->push(x[k]);
	}


}
