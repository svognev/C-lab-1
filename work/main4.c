#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
int main()
{
	int feet, inches = 0;
	printf("Hello! Pls, enter you height.\n");
	scanf("%d'%d", &feet, &inches);
	printf("Your height is:%.1f SANTIMETROV\n", convert(feet, inches));
	return 0;
}