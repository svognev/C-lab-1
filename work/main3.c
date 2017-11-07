#include <stdio.h>
#include "task3.h"

int main()
{
	double angle = -1.0;
	char type = 0;
	char buf[50];

	printf("This program translates the value of the angle \n"
		"from degrees to radians and vice versa. \n\n"
		"For translation enter a value in the following way: \n"
		"45.00D - the value in degrees \n"
		"45.00R - the value in radians \n\n");
	scanf("%lf%c", &angle, &type);

	if (angle >= 0)
	{
		switch (type)
		{
			case 'D':
			case 'd':
			case 'R':
			case 'r':
			{
				printf("\n%.5lf%c  is  %s\n\n", angle, type, convert(buf, angle, type));
				return 0;
			}
			break;
			default:
			{
				printf("\nError!!! Enter the data correctly!\n");
				return 1;
			}
			break;
		}
	}
	else
	{
		printf("\nError!!! Enter the data correctly!\n");
		return 1;
	}
}