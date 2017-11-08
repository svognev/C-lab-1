#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

float convert(int feet, int inches)
{
	return (((feet * 12) + inches) * 2.54);
}