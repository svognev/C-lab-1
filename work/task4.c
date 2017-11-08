#include "task4.h"
#define FEET_PER_INCHES 12
#define INCHES_PER_CM 2.54

float convert(int feet, int inches)
{
	if (feet>=0 && inches >=0)
	{
		float cm = feet * FEET_PER_INCHES * INCHES_PER_CM + inches * INCHES_PER_CM;
		return cm;
	}
	else
	{
		return -1.0F;
	}
}