#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

char * convert(char buf[], double angle, char type)
{	
	(type == 'R') ? sprintf(buf, "%lf%c", angle*180 / 3.1416, 'D') : sprintf(buf, "%lf%c", angle*3.1416 / 180, 'R');
	return buf;
}
