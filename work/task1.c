// first time
#include"task1.h"


int getRecommendation(char gender, float height, float weight)
{
	double koefgender, CheckWeight;// variables weight ratio and gender
	if (gender == 'm')//check the first letter from the entered gender
		koefgender = 100;// the coefficient of gender male
	else
	{
		koefgender = 110;// the coefficient of gender female
	}
	CheckWeight = height - koefgender;//calculated ideal weight forthe entered height
	if (CheckWeight == weight)//check to see if the entered weight and ideal
		return 0;// the entered weight equal ideal weight
	if (CheckWeight < weight)//check to see: what's more the entered weight or ideal
	{
		return 1;// the entered weight more ideal weight
	}
	else
	{
		return -1;// the entered weight less ideal weight
	}


}