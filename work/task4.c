#include<stdio.h>
#include"task4.h"
#define FEET 30.48
#define INCHES 2.54

float convert(int feet, int inches)
{
	float convertFeet;
	float convertInches;
	float convertGrowth;
	convertFeet = (float)feet*FEET;
	convertInches = (float)inches*INCHES;
	convertGrowth = convertFeet+convertInches;
	return convertGrowth;
}