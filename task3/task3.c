#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include "task3.h"

char * convert(char buf[], double angle, char type) {
	if (type == 'R')
	{
		sprintf(buf, "%lfD\0", (angle * 180.0 / M_PI));
		return buf;
	}
	if (type == 'D')
	{
		sprintf(buf, "%lfR\0", (angle * M_PI / 180.0));
		return buf;
	}
	else
		return ("Error!");
}
