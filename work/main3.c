#include <stdio.h>
#include "task3.h"
#define SIZE 20
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char buf[SIZE];
	double angle;
	char type;
	int result;

	printf("Please enter the value of the angle in the format -value D\R:\n");
	result = scanf("%lf%c", &angle, &type);

	if (result < 2 || ((type != 'D') && (type != 'R')))
		printf("Uncorrect value!\n");
	else
		printf("%s\n", (convert(buf, angle, type)));

	return 0;
}