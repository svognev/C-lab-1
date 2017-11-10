#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0, inches = 0;

	printf("Enter the height in feet and inches. (FF'II): ");
	if ((scanf("%d'%d", &feet, &inches) == 2) && feet >= 0 && inches > 0)
		printf("Height in centimeters %.1f.\n", convert(feet, inches));
	else
		printf("Uncorrect data.\n");

	system("pause");
	return 0;
}