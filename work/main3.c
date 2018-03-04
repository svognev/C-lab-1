#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task3.h"

int main()
{
	char type = 'D';
	double angle;
	char buf[20];

	printf("Enter the value of the angle to convert.\n"
		   "Add 'R' in the end of value\nif you have radians (45R)\n"
		   "or 'D' if you have degrees (45D): ");

	while (scanf("%lf%c", &angle, &type) != 2 || type == '\n')
		printf("\nInvalid input. Please try again.\nFor examle -12D or 70.5R: ");
	printf("\n%s\n\n", convert(buf, angle, type));
		return 0;
}
