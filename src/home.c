/*
 * home.h
 */
#include "home.h"

extern int open(){
	for(int i =0;i<6;i++){
		if(doors[i]==1){
			continue;
		}
		else if(doors[i]==0){
			if(sensors[2i]==1 || sensors[2i+1]==1){
				return i;
			}
		}
	}
	return -1;
}
extern int close(){
	for(int i =0;i<6;i++){
		if(doors[i]==0){
			continue;
		}
		else if(doors[i]==1){
			if(sensors[2i]==0 && sensors[2i+1]==0){
				return i;
			}
			else{
				continue;
			}
		}
	}
	return -1;
}

extern void zeros(int* arr, int len){
	for(int i = 0; i < len; i++){
		response[i] = 0;
	}
}
