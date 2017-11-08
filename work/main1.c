#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender[7];
	float height = 0;
	float weight = 0;
	
	//Get gender
	printf("What's your gender? (male/female)\n");
	scanf("%s", gender);
	
	//Get height
	printf("What's your height? (number, cantimeters)\n");
	scanf("%f", &height);

	//Get weight
	printf("What's your weight? (number, kilos)\n");
	scanf("%f", &weight);

	//Calculate
	int result = getRecommendation(gender, height, weight);
	if (result == -1)
		printf("Your weight is not enough.\n");
	if (result == 1)
		printf("Your weight is too big.\n");
	if (result == 0)
		printf("Your weight is ideal.\n");
	if (result == 2)
		printf("Data error.\n");

	return 0;
}