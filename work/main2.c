#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task2.h"

int main()
{
	int hour, min;
	char *str_greet;

	printf("Enter your time hh:mm \n");
	scanf("%d:%d", &hour, &min);
	printf("%d - hour, %d - min \n", hour, min);
	
	str_greet = greet(hour, min);
	printf("%s \n", str_greet);

	return 0;
}