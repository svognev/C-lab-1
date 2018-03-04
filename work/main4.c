#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
	int feet, inches, result;
	puts("Enter your height in feets and inches (for example - 5'11):");

	while (scanf("%d'%d", &feet, &inches) != 2 || feet < 0 || inches < 0)
	{
		puts("Invalid input. Try again:");
		while (getchar() != '\n')
			continue;
	}

	printf("\nYour height is %.1lf cm\n\n", convert(feet, inches));

		return 0;
}