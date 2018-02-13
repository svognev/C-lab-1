#include <stdio.h>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

char gender;
float height;
float weight;

int main()
{
	printf("Please enter your gender\n");
	scanf("%c", &gender);
	printf("Please enter your height\n");
	scanf("%f", &height);
	printf("Please enter your weight\n");
	scanf("%f", &weight);

	if (getRecommendation(gender, height, weight) == -1)
		printf("You need to get better\n");
	else if (getRecommendation(gender, height, weight) == 1)
		printf("You need to lose weight\n");
	else
		printf("Your weight is normal\n");

	return 0;
}