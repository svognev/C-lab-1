#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <string.h>

char* greet(int hour, int min)
{
	if (hour < 0 || hour >= 24 || min < 0 || min >= 60)
		return "Uncorrect time!";
	else if (hour >= 0 && hour < 6)
		return "Good night!";
	else if (hour >= 6 && hour < 11)
		return "Good morning!";
	else if (hour >= 11 && hour < 18)
		return "Good day!";
	else //if (hour >= 18 && hour < 24)
		return "Good evening!";
}