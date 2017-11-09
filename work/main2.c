#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"
#include <string.h>


int main() 
{
	int hour = 0, min = 0, sec = 0, result = 0;
	printf("Enter the current time hours:minutes:seconds\n");
	result = scanf("%d:%d:%d", &hour, &min, &sec);
	if (result < 3 || sec >= 60 || sec < 0) {
		printf("Uncorrect time!\n");
		return 1;
	}
	printf("%s\n",(greet(hour, min)));
	return 0;
}