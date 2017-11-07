#include "task1.h"
int getRecommendation(char gender, float height, float weight)
{
	
	float ideal_weight;
	
	/*if (gender == 'w')
	{
		ideal_weight = height - 110;
		if (weight < ideal_weight)
			return -1;
		else if (weight > ideal_weight)
			return 1;
		else
			return 0;
	}
	else if (gender == 'm')
	{
		ideal_weight = height - 100;
		if (weight < ideal_weight)
			return -1;
		if (weight > ideal_weight)
			return 1;
		else
			return 0;
	}
	else 
	{
		return 2;
	}*/

	switch (gender)
	{
		case 'w':
		{
			ideal_weight = height - 110;
			if (weight < ideal_weight)
				return -1;
			else if (weight > ideal_weight)
				return 1;
			else
				return 0;
		}
		break;

		case 'm':
		{
			ideal_weight = height - 100;
			if (weight < ideal_weight)
				return -1;
			else if (weight > ideal_weight)
				return 1;
			else
				return 0;
		}
		break;

		default:
			return 2;
			break;
	}
}