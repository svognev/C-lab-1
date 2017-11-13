#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{
	int hour = 0, min = 0, sec = 0;

	printf("Enter the time in the format HH:MM:SS ");
	if (scanf("%d:%d:%d", &hour, &min, &sec) == 3)
		printf("%s", greet(hour, min, sec));
	else
		printf("Uncorrect time!");

	system("pause");
	return 0;
}