#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[12];
	double angle;
	char type;

	// 180.00D , 3.14R etc.
	printf("Enter a value in degrees or radians: \n");
	scanf("%lf%c", &angle, &type);

	printf("Converted angle: %s \n",
		convert(buf, angle, type));
	return 0;
}