#include "task4.h"
float convert(int feet, int inches)// function convert feet to centimeters
{
	float sm = 0.0; // the value 
	if(inches>0)// check inches >0 and then the value * centimeters
	sm = (feet * 12.0)*2.54 + (inches*2.54); //add up centimeters the inches and feet
	else
		sm = (feet * 12.0)*2.54;// final calculation without inches
	return sm;
}

