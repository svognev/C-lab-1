#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;
	printf("Enter feet:");
	scanf("%d,%d", &feet, &inches);
	printf("%.1f",
	    	convert(feet, inches));

	return 0;
}