#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task2.h"

int main()
{
	int hour = 0;
	int min = 0;
	printf("Type in the current time in the HH:MM:SS format:\n");
	scanf("%d:%d", &hour, &min);
	printf(greet(hour, min));
	return 0;
}