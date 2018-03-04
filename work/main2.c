#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task2.h"

int main()
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	printf("Input the current time (format - HH:MM:SS): ");
	while ((scanf("%d:%d:%d", &hour, &min, &sec) != 3) || sec < 0 || sec > 59 || min < 0 || min > 59 || hour < 0 || hour > 24)
	{
		printf("Incorrect time! Please, try again.\nUse the next format HH:MM:SS: ");
	}
	puts(greet(hour, min));
	return 0;
}