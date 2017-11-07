#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "task3.h"

int main()
{
	char buf[30] = {'\0'};
	double angle = 0.0;
	char type = 0;

	printf("Enter angle with its unit (eg 45.00D or 3.14159R): ");
	scanf("%lf%c", &angle, &type);
	printf("Inputted data: %lf%c\n", angle, type);

	char* ptr = convert(buf, angle, type);
	printf("Converted angle: %s\n", buf);

	return 0;
}