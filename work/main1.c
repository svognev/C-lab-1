#include <stdio.h>
#include "task1.h"

int main()
{
	char gender;
	int height = 0, weight = 0, rezult;
	printf("Enter your gender, height and weight (format: g,h,w): ");
	scanf("%c,%d,%d", &gender, &height, &weight);
	rezult = getRecommendation(gender, height, weight);
	if (rezult == 1)
	{
		printf("You need to lose weight.\n");
	}
	else if (rezult == 0)
	{
		printf("Your weight is OK.\n");
	}
	else if (rezult == -1)
	{
		printf("You need to gain weight.\n");
	}
	return 0;
}