#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

extern float difference;

int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm' || gender == 'M')
		difference = weight - height + 100;
	else
		difference = weight - height + 110;

	if (difference == 0)
		return 0;
	else if (difference > 0)
		return 1;
	else
		return -1;
}