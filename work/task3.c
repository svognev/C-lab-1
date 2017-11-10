#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char * convert(char buf[], double angle, char type)

{
	if (type == 'D')
	{
		sprintf(buf, "%.2lf%c", (angle * 3.14159 / 180.0), 'R');
		return buf;
	}

	if (type == 'R')
	{
		sprintf(buf, "%.2lf%c", (angle * 180.0 / 3.14159), 'D');
		return buf;
	}
}