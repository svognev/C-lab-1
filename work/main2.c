#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "task2.h"

int main()
{
	int hour = 0, min = 0, sec = 0;
	printf("Enter current time as hours:minutes:seconds (eg 18:40:36): ");
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf("Inputted data: %d:%d:%d\n", hour, min, sec);
	if (sec < 0 || sec > 59)
		printf("%s\n", "Uncorrect time!");
	else
		printf("%s\n", greet(hour, min));
	return 0;
}