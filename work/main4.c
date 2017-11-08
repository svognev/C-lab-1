#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;
	printf("Enter your height in the \"ft\'inch\" format \n");
	scanf("%d'%d", &feet, &inches);
	printf("Your height in cm is:\n");
	printf("%.1f\n", convert(feet, inches));
	return 0;
}