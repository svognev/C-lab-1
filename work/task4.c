#include <stdio.h>

float convert(int feet, int inches)
{
	//converting
	int inchInFeet = 12; // 1 feet = 12 inches
	float smInInch = 2.54; // 1 inches = 2.54 santm

	return (feet * inchInFeet + inches) * smInInch;
}