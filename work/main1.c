#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task1.h"

int main()
{
	char gender;
	float height, weight;
	int getRec;

	do
	{
		printf("Enter your gender: m - man, w - woman \n");
		scanf("%c", &gender);
	} while ((gender != 'm') && (gender != 'w'));
			
	printf("Enter your height, cm \n");
	scanf("%f", &height);
	printf("Enter your weight, kg \n");
	scanf("%f", &weight);
	getRec = getRecommendation(gender, height, weight);
	
	if (getRec == 0)
		printf("Your weight is perfect \n");
	else if (getRec == 1)
		printf("Your weight is big \n");
	else if (getRec == -1)
		printf("Your weight is small \n");

	return 0;
}