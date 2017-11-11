#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender = '0';
	float height = 0;
	float weight = 0;
	printf("Please, enter your gender (m - male, w - female), your height and your weight\n");
	scanf("%c %f %f", &gender, &height, &weight);
	if (getRecommendation(gender, height, weight) == 0)
		printf("Ideal weight!\n");
	if (getRecommendation(gender, height, weight) == 1)
		printf("Fat!\n");
	if (getRecommendation(gender, height, weight) == -1)
		printf("Skin!\n");
	if (getRecommendation(gender, height, weight) == 2)
		printf("Who are you?!\n");
	return 0;
}