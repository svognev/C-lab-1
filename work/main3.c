#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task3.h"

int main()
{
	double angle;
	char type;
	char buf[50];
	char *st;
	
	do {
		printf("Enter angle R or D\n");
		scanf("%lf%c", &angle, &type);
	} while ((type!='R') && (type != 'D'));
	
	sprintf(buf, "%lf%c", angle, type);
	st=convert(buf, angle, type);
	printf("Answer - %s \n",st);

	return 0;
}