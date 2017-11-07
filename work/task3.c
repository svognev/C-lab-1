#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES // for C  
#include <math.h>
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
	double convCoeff = M_PI / 180.0;
	double convAngle = 0.0;
	char convType = 0;

	if (type == 'D')
	{
		convAngle = angle * convCoeff;
		convType = 'R';
	}
	else if (type == 'R')
	{
		convAngle = angle / convCoeff;
		convType = 'D';
	}

	sprintf(buf, "%lf%c", convAngle, convType);
	return buf;
}