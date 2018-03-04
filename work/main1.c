#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
float difference;

int main()
{
	char gender;
	float height;
	float weight;

	printf("Your gender (M or W): ");
	scanf("%c", &gender);
	printf("Your height (in cm): ");
	scanf("%f", &height);
	printf("Your weight (in kg): ");
	scanf("%f", &weight);

	if (getRecommendation(gender, height, weight) == 0)
		puts("\nCongratulations! Your weight is ideal.\n");
	else
		printf("\nYour weight is %s than ideal by %.0f kg\n\n",
		difference < 0 ? "less" : "more", 
		difference < 0 ? -difference : difference);
	return 0;
}