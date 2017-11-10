#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char* convert(char buf[], double angle, char type)
{

	if (type == 'd')
	{
		angle = (180.0 / 3.14)*angle;
		type = 'R';
	}
	else
	{
		angle = (3.14 / 180.0)*angle;
		type = 'D';
	}
	int res = sprintf(buf, "%f%c", angle, type);
	return buf;
}
