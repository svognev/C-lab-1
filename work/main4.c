#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task4.h"

int main()
{
	int feet, inches;
	float sm_rez;

	printf("Enter high feet'inches \n");
	scanf("%d'%d", &feet, &inches);
	printf("%d - feet, %d - inches \n", feet, inches);
	sm_rez = convert(feet, inches);
	printf("%.1f - sm \n", sm_rez);

	return 0;
}