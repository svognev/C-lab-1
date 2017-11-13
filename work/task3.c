#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if (type == 'R' || type == 'r')
	{
		sprintf(buf," %.3lfD\0", ((angle * 180) / 3.14));
		return buf;
	}
	else if (type == 'D' || type == 'd')
	{
		sprintf(buf, "%.3lfR\0", ((angle * 3.14) / 180));
		return buf;
	}
	return ("Sorry, error!");
}