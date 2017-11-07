#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include<stdio.h>

int main()
{
	int feet, inches,val;//variables
	printf("This program is a translator. Enter height : ft'inch  ");// enter the data to the programm is offered in: ft'inches, for exemple 5'11
	scanf("%i'%i", &feet, &inches);// the written vallue in feet and inches
	val=convert(feet,inches);// assign the final return
	printf(" %d feet %d inch = %d  centimetors \n",feet,inches, val);// print of value

	return 0;
}