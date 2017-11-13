#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender = 0;
	float height = 0.0f, weight = 0.0f;
	int a;

	printf("Enter your gender (m or w): \n");
	if ((scanf("%c", &gender) == 1) && ((gender == 'm') || (gender == 'w')));
	else
		printf("Invalid input.\n");

	printf("Enter your height: \n");
	if ((scanf("%f", &height) == 1) && (height >= 0));
	else
		printf("Invalid input.\n");

	printf("Enter your weight: \n");
	if ((scanf("%f", &weight) == 1) && (weight >= 0));
	else
		printf("Invalid input.\n");

	if (getRecommendation(gender, height, weight) == 0)
		printf("Your weight is perfect.\n");

	if (getRecommendation(gender, height, weight) == -1)
		printf("Your weight is not enough.\n");

	if (getRecommendation(gender, height, weight) == 1)
		printf("Your weight is excessive.\n");

	system("pause");
	return 0;
}