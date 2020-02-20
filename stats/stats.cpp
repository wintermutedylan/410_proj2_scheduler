/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 */
#include "../includes/stats.h"
//TODO fill in content
using namespace std;

Stats::Stats(std::vector<PCB> &finished_vector){
	*vec = finished_vector;
}

void Stats::showAllProcessInfo(){
	for (int i = 0; i < vec->size(); i++){
		cout << "Process " << i << " Required CPU time:" << vec->at(i).required_cpu_time << "  arrived:" << vec->at(i).arrival_time << "  started:" << vec->at(i).start_time << "  finished:" << vec->at(i).finish_time <<endl;
	}
}

float Stats::get_av_response_time(){
	for (int i = 0; i < vec->size(); i++){

	}
	return 1.00;
}

float Stats::get_av_turnaround_time(){
	return 1.00 ;
}

float Stats::get_av_wait_time(){
	return 1.00;
}

void Stats::calcStats(){
	this->av_response_time = get_av_response_time();
	this->av_wait_time = get_av_wait_time();
	this->av_turnaround_time = get_av_turnaround_time();
}
