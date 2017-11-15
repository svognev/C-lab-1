#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender = '0';
	float height, weight = 0;
	printf("Please, enter your gender (m - male, w - female), your height and your weight\n");
	scanf("%c %f %f", &gender, &height, &weight);
	if ((height > 0) && (height < 251) && (weight > 0) && (weight < 200))
	{
		if (getRecommendation(gender, height, weight) == 0)
			printf("Ideal weight!\n");
		if (getRecommendation(gender, height, weight) == 1)
			printf("Fat!\n");
		if (getRecommendation(gender, height, weight) == -1)
			printf("Skin!\n");
		if (getRecommendation(gender, height, weight) == 2)
			printf("Who are you?!\n");
	}
	else printf("Please, enter correct height and weight\n");
	return 0;
}