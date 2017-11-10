#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#define SIZE 30
   
int main()
{
	char buf[SIZE] = { 0 };
	double angle = 0.0;
	char type;
	int result;
	printf("Enter the angle in the format: valueR/D (18.9R)\n");
	result = scanf("%lf%c", &angle, &type);

	if (result < 2 || ((type != 'D') && (type != 'R')))
	{
		printf("Uncorrect input!\n");
		return 1;
	}

	printf("%s\n", (convert(buf, angle, type)));
	return 0;
}