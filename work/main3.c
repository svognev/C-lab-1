#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[20];
	double angle;
	char type;

	do {
		printf("Enter the angle value [for example: 90.00D or 2.00R]: ");
		scanf("%lf %c", &angle, &type);		
	} while ((type != 'R') && (type != 'D'));
		
	printf("Result of converting: %s \n", convert(buf, angle, type));

	return 0;
}