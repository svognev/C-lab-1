#include<stdio.h>
#include"task3.h"
#define PI 3.14


char * convert(char buf[], double angle, char type)
{
	char convertType;
	double convertAngle;
	if (type == 'D' || type == 'd')
	{
		convertType = 'R';
		convertAngle = (angle*PI) / 180;
	}
	else
	{
		convertType = 'D';
		convertAngle = (angle*180) / PI;
	}
	sprintf(buf, "%.5lf%c", convertAngle, convertType);
	return buf;
}