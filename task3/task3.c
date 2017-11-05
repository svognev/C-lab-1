#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include "task3.h"

char * convert(char buf[], double angle, char type) {
	if (&type == "R"))
	{
		double anglesInDegrees = (angle * 180.0 / M_PI);
		sprintf(&buf, "%f%s", anglesInDegrees, "D\0");
		return buf;
	}
	if (&type == "D"))
	{
		sprintf(&buf, "%lf%s", (angle * M_PI / 180.0), "R\0");
		return buf;
	}
	else
		return ("Error!");
}
