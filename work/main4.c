#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = -1;
	int inches = -1;
	float cm;

	printf("Enter your height in feet and inches.\n"
		"Do it in the form: feet'inches. For example: 5'11.\n\n");
	scanf("%d'%d", &feet, &inches);
	if (convert(feet, inches) == -1.0F)
	{
		printf("\nError!!! Enter the data correctly!\n\n");
		return 1;
	}
	else
	{
		cm = convert(feet, inches);
		printf("\nYour height is %d feet %d inches or %.1f centimeters.\n\n", feet, inches, cm);
		return 0;
	}
}