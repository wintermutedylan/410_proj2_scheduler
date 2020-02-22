/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */


#include "../includes/scheduler.h"

using namespace std;

	void Scheduler::add(PCB p){
		ready_q->push(p);

	}

	PCB Scheduler::getNext(){
		PCB x = ready_q->front();
		ready_q->pop();
		return x;
	}

	bool Scheduler::isEmpty(){
		return ready_q->empty();
	}

	bool Scheduler::time_to_switch_processes(int tick_count, PCB &p){


		if (preemptive == true){
			if (tick_count >= time_slice){
				return true;
			}
		}
		else {
			if (tick_count >= p.remaining_cpu_time){
				return true;
			}

		}
		return false;

	}

//TODO fill in content






