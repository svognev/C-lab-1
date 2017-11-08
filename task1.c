#include <stdio.h>

int getRecommendation(char gender, float height, float weight)
{
	float IdealWeight;


	if (gender == 'M')
		IdealWeight = height - 100;
	else 
		IdealWeight = height - 110;

	if (IdealWeight == weight)
		return 0;
	else if (IdealWeight > weight)
		return -1;
	else if (IdealWeight < weight)
		return 1;
}