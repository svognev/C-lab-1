#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include<stdio.h>
//the programm that convert the angle from degrees to radian, and vice versa, depending on the symbol when you enter
int main()
{
	char type = 'Q';//the symbol: radian or degrees
	double angle;// the value of angle
	char *buf[10]; // buffer for the final conversion
	printf("Enter the value of angle and type: ");
	scanf("%lf%c", &angle, &type);//true correct code
	if (type == 'd' || type == 'r' || type == 'D' || type == 'R')//check type if 'R' or 'D'/, then convert
	{
		printf("=%s\n", convert(buf, angle, type));// print the result in string
		return 0;
	}
	return 1; // if not tested letters
}