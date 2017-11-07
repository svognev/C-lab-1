#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "task1.h"

int main()
{
	char gender = 0;
	float height = 0.0f, weight = 0.0f;
	printf("Enter your gender (m or w), height in cm, weight in kg (eg m, 180.5, 70.7): ");
	scanf("%c, %f, %f", &gender, &height, &weight);
	printf("Inputted data: %c, %.1f, %.1f\n", gender, height, weight);

	int recomm = getRecommendation(gender, height, weight);
	if (recomm == 1)
		printf("Your recommendation: lose weight\n");
	else if (recomm == -1)
		printf("Your recommendation: gain weight\n");
	else if (recomm == 0)
		printf("Your recommendation: don't need anything (norm)\n");

	return 0;
}