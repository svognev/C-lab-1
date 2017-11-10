#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{
	int hour, min,sec;
	printf("Enter the time:\n");
	scanf("%d:%d:%d", &hour, &min,&sec);
	
	printf("%s\n", greet(hour, min));

	return 0;
 }