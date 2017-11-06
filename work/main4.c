#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main() 
{
	int feet, inches;

	printf("Enter your height [ft'in]: ");
	scanf("%d'%d", &feet, &inches);	
	printf("Your height: %.1f cm \n", convert(feet, inches));
		
	return 0;
}