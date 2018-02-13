#include <stdio.h>
#include "task4.h"

int main()
{
	int feet, inches, result;

	printf("Please enter your height in the format of feet'inches (e.g. 5'11):\n");
	result = scanf("%d'%d", &feet, &inches);

	if (result < 2)
		printf("Not valid data\n");
	else
		printf("%.1f\n", convert(feet, inches));

	return 0;
}