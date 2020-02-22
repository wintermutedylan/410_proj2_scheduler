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
	vec = &finished_vector;
	av_turnaround_time = 0.0;
	av_wait_time = 0.0;
	av_response_time = 0.0;
}

void Stats::showAllProcessInfo(){
	for (int i = 0; i < vec->size(); i++){
		cout << "Process " << i << " Required CPU time:" << vec->at(i).required_cpu_time << "  arrived:" << vec->at(i).arrival_time << "  started:" << vec->at(i).start_time << "  finished:" << vec->at(i).finish_time <<endl;
	}
}

float Stats::get_av_response_time(){
	float x;
	int vecSize = vec->size();
	for (int i = 0; i < vec->size(); i++){
		x = x + vec->at(i).start_time - vec->at(i).arrival_time;
	}
	float results = x / vecSize;

	return results;
}

float Stats::get_av_turnaround_time(){
	float a;
	int vecSize = vec->size();
	for (int i = 0; i < vec->size(); i++){
		a = a + vec->at(i).finish_time - vec->at(i).arrival_time;
	}
	float results = a / vecSize;
		return results;
}

float Stats::get_av_wait_time(){
	float k;
	int vecSize = vec->size();
	for (int i = 0; i < vec->size(); i++){
		k = k + vec->at(i).finish_time - vec->at(i).arrival_time - vec->at(i).required_cpu_time;
	}
	float results = k / vecSize;
	return results;
}

void Stats::calcStats(){
	this->av_response_time = get_av_response_time();
	this->av_wait_time = get_av_wait_time();
	this->av_turnaround_time = get_av_turnaround_time();
}
