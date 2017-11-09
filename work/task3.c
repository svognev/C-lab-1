#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#define pi 3.14159//26535897932384626433832795

char * convert(char buf[], double angle, char type) 
{
	if (type == 'R')
	{
		sprintf(buf, "%lf%c", (angle*(180/pi)), 'D');
	}
	else if (type == 'D')
	{
		sprintf(buf, "%lf%c", (angle*(pi/180)), 'R');
	}
	return buf;
}
