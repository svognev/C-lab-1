#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
int main()
{
	char buf[20];
	double angle = 0;
	char type;
	printf("Hello! Please, enter angle with R or D\n");
	scanf("%lf%c", &angle, &type);
	printf("Calculate:%s\n", convert(buf, angle, type));
	return 0;
}