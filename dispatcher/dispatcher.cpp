/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

#include "../includes/dispatcher.h"



	PCB Dispatcher::get_from_CPU(){
		if (isValidJobOnCPU() == true){
			is_valid_job_on_cpu = false;
			return cpu->get_process_off_core();

		}
		else {

			return PCB();
		}

	}

	void Dispatcher::put_on_CPU(PCB &process){
		if (process.isEmpty() == false && isValidJobOnCPU() == false){
			is_valid_job_on_cpu = true;
			cpu->put_process_on_core(process);
		}




	}
	bool Dispatcher::isValidJobOnCPU(){
		return is_valid_job_on_cpu;

	}


//TODO fill in content

