//Написать программу, которая переводит рост из американской си -
#include "task4.h"

float convert(int feet, int inches)
{
	return ((feet * 12 + inches) * 2.54);
}