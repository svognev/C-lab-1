#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "task4.h"

int main()
{
	int feet = 0, inches = 0;
	printf("Enter your growth as feet'inches (eg 5'11): ");
	scanf("%d'%d", &feet, &inches);
	printf("Inputted data: %d'%d\n", feet, inches);
	printf("Calculated growth: %.1f cm\n", convert(feet, inches));
	return 0;
}