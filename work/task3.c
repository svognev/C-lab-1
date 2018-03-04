#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task3.h"

char * convert(char buf[], double angle, char type)
{
	if (type == 'R' || type == 'r')
		sprintf(buf, "%lf%c", (angle * 180 / 3.14), 'D');
	else if (type == 'D' || type == 'd')
		sprintf(buf, "%lf%c", (angle * 3.14 / 180), 'R');
	else
		buf = "Error!";
	return buf;
}
