#include <stdio.h>

int getRecommendation(char gender, float height, float weight)
{
	float IdealWeight;
	char NewGender[2];

	NewGender == gender;

	if (NewGender, "M" != 0)
		IdealWeight = height - 100;
	else if (NewGender, "W" != 0)
		IdealWeight = height - 110;

	if (IdealWeight == weight)
		return 0;
	else if (IdealWeight > weight)
		return -1;
	else if (IdealWeight < weight)
		return 1;
}