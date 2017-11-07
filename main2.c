#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include<stdio.h>
// the programm that convert current time in output a greeting
int main()
{
	int hour = 0, min = 0, sec = 0, checkEnter=0;// the variable mi sec and hour
	char *greeting = "error";// the variable greeting and first value
	printf(" Enter your time : hh:mm:ss - ");//enter current time
	checkEnter = scanf("%i:%i:%i", &hour, &min, &sec);//check number enter;  associated values to variable: hour, min, sec
	//(scanf("%i:%i:%i", &hour, &min, &sec));
	if (sec > 60 || checkEnter!=3)// check if secînd >60 then error
		{
			printf("Time error\n");// // print error if condition is true
			return 1;// 
		}
	greeting = greet(hour,min);// associated greeting with return function greeting
	printf("%s\n",greeting);// print greeting
	return 0;

}

