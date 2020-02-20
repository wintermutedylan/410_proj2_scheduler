/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

#include "../includes/dispatcher.h"



	PCB Dispatcher::get_from_CPU(){
		return cpu->get_process_off_core();
	}

	void Dispatcher::put_on_CPU(PCB &process){
		cpu->put_process_on_core(process);
	}
	bool Dispatcher::isValidJobOnCPU(){
		if (cpu->get_COPY_of_Current_Process().isEmpty()){
			return false;
		}
		else {
			return true;
		}

	}


//TODO fill in content

