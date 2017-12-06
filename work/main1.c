#include <stdio.h>
#include "Task1.h"

int main()
{
	char gender;
	float height, weight;
	printf("Enter your gender(m or w), height, weight. (m,173,70)\n");
	scanf("(%c,%f,%f)", &gender, &height, &weight);
	if (getRecommendation(gender, height, weight) == 0)
		printf("Weight is ideal!\n");
	else if (getRecommendation(gender,height,weight) == 1)
		printf("Weight is excessive.\n");
	else if (getRecommendation(gender, height, weight) == 2)
		printf("Gender entered incorrectly. Try again\n");
	else
		printf("Weight is not enough.\n");
	return 0;
}