#include "task2.h"

char* greet(int hour, int min)
{
	if ((hour >= 0 && hour < 6) && (min >= 0 && min < 59))
		return "Good night!\n";
	if ((hour >= 6 && hour < 11) && (min >= 0 && min < 59))
		return "Good morning!\n";
	if ((hour >= 11 && hour < 18) && (min >= 0 && min < 59))
		return "Good day!\n";
	if ((hour >= 18 && hour < 0) && (min >= 0 && min < 59))
		return "Good evening!\n";
	else
		return "Uncorrect time!\n";
}