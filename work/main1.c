#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	
		char gender;
		float height, weight;
		do {
			printf("Enter your gender Men(M) or Women(W):\n");
			scanf("%c", &gender);
		} while ((gender != 'M') && (gender != 'W'));
		
		printf("Enter your height\n");
		scanf("%f", &height);
		printf("Enter your weight\n");
		scanf("%f", &weight);
		if (getRecomendation(gender, height, weight) == 0)
			printf("Normal!\n");
		else if (getRecomendation(gender, height, weight) == -1)
			printf("Get fat!\n");
		else if (getRecomendation(gender, height, weight) == 1)
			printf("Lose weight!\n");
		
	return 0;
}
