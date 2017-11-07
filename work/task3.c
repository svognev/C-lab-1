#include <stdio.h>
#include "task3.h"
#define PI 3.141592
#define DEGREES 180

char * convert(char buf[], double angle, char type)
{
	char conv_type;
	double conv_angle;

	if ((type == 'D') || (type == 'd'))
	{
		conv_type = 'R';
		conv_angle = (angle * PI) / DEGREES;
	}
	else
	{
		conv_type = 'D';
		conv_angle = (angle * DEGREES) / PI;
	}
	
	sprintf(buf, "%.5lf%c", conv_angle, conv_type);
	return buf;
}