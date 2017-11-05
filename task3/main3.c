#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char buf[32];
	double angle = 0;
	char type;
	printf("Enter angle in Radians or Degrees. Example: 45.00R\n");
	scanf("%lf%c", &angle, &type);
	convert(buf, angle, type);
	printf("%s", buf);
	return 0;
}