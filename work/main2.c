#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task2.h"

int main()
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	printf("Type in the current time in the HH:MM:SS format:\n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	if (sec < 0 || sec > 59)
	{
		printf("Data error!\n");
		return 0;
	}
	printf(greet(hour, min));
	return 0;
}