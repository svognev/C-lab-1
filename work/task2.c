#include<stdio.h>
#include"task2.h"

char * greet(int hour, int min) {
	if (0 <= hour < 24 && 0 <= min < 60)
	{
		if (0 <= hour < 6)
			return "Good night!";
		else if (06 <= hour <= 11)
			return "Good morning!";
		else if (11 < hour <= 18)
			return "Good day!";
		else
			return "Good evening!";
	}
	else
		return "Uncorrect time!";
}