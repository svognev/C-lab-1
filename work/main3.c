#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

main()
{
	char buf[8] = { 0 };
	double angle = 0;
	char type = 0;

	printf("Enter the angle value. Add at the end of D if it is expressed in degrees, and R if it is expressed in radians. \n"
		   "For example 56.78D or 1.23R : \n");
	if ((scanf("%lf%c", &angle, &type) == 2 ) && (type == 'D' || type == 'R'))
		printf("%s\n", convert(buf, angle, type));
	else
		printf("Uncorrect data.\n");

	system("pause");
	return 0;
}