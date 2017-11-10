#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>


int main()
{
	float out = 0.0f;	//Переданный рост в сантиметрах
	int feet = 0, inches = 0, result = 0;
	printf("Enter feet and inches to convert to format: futy'inches\n");
	result = scanf("%d'%d", &feet, &inches);
	if (result < 2) {
		printf("Not valid data\n");
		return 1;
	}
	out = convert(feet, inches);
	printf("%.1f\n", out);
}
