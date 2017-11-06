#include <stdio.h>
#include <string.h>
#include "task1.h"

int main()
{
	char gender[2];
	float weight = 0, height = 0;

	do {
		printf("Enter your gender: Men(M) or Woman(W)? \n");
		scanf("%s", &gender);
	} while ((strcmp(gender, "M") != 0) && (strcmp(gender, "W") != 0));
	
	printf("Enter your weight: \n");
	scanf("%f", &weight);

	printf("Enter your height: \n");
	scanf("%f", &height);
		
	if (getRecommendation(gender, height, weight) == 0)
		printf("Your weight is normal! \n");
	else if (getRecommendation( gender, height, weight) == -1)
		printf("Your weight is not enough! \n");
	else if(getRecommendation(gender, height, weight) == 1)
		printf("Your weight is excessive! \n");

	return 0;
}