#include<stdio.h>
#include<string.h>

int getRecommendation(char gender, float height, float weight)
{
	float ex_weight;
	char gender_ex[2];

	gender_ex == gender;
	
	if (strcmp(gender_ex, "m") == 0)
		ex_weight = height - 100;
	else if (strcmp(gender_ex, "w") == 0)
		ex_weight = height - 110;


	if (ex_weight == weight)
		return 0;
	else if (ex_weight > weight)
		return 1;
	else if (ex_weight < weight)
		return -1;
}
