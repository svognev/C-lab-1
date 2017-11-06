#include <stdio.h>

char* greet(int hour, int min)

{
	if (hour >= 0 && hour <= 5 && min >= 0 && min <= 60)
		return "Good night!";
	else if (hour >= 6 && hour <= 10 && min >= 0 && min <= 60)
		return "Good morning!";
	else if (hour >= 11 && hour <= 17 && min >= 0 && min <= 60)
		return "Good day!";
	else if (hour >= 18 && hour <= 23 && min >= 0 && min <= 60)
		return "Good afternoon!";
	else if (1)
		return "Uncorrect time!";
}
