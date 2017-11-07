#include "task2.h"
#include<stdio.h>
char* greet(int hour, int min)// function convert time to greeting
{
	char* greeting="error task2";// association greetin first value
	if (hour >= 00 && hour < 6)// check night
		greeting = "Good night!";//the value greeting if condition is true
	if (hour >= 6 && hour < 11)// check morning
		greeting = "Good morning!";//the value greeting if condition is true
	if (hour >= 11 && hour < 18)// check day
		greeting = "Good day!";//the value greeting if condition is true
	if (hour >= 18 && hour <= 24&& min<=60)
		greeting = "Good evening!";//the value greeting if condition is true
	if (hour > 23 || min > 60)//check uncorrect enter
		greeting = "Uncorrect time!";//the value greeting if condition is true
	return greeting;
}
