#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
int main()
{
	double angle = 0;
	char type;
	char buf[10];

	printf("Enter angle value to convert (Example 45.00D or 45.00R):\n");	
	scanf("%lf%c", &angle, &type);

	printf("Convert value is %s\n", convert(buf,angle,type));

	system("pause");
	return 0;
}