#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[100];
	double angle=0;
	char type=0;
	printf("Enter angle:");
	scanf("%1f%c", &angle, &type);
	if ((type == 'd') ||(type == 'r')) {
		convert(buf, angle, type);
		printf("%s\n", buf);
	}
	else
		printf("Data error!\n");
	return 0;
}