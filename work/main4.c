#include<stdio.h>
#include"task4.h"

int main()
{
	int feet,inches;
	printf("Enter the your growth^ feet and inches (2'4):\n");
	scanf("%d'%d", &feet, &inches);
	if (feet > 0 || inches > 0)
		printf("Your growth %.1lf sm\n", convert(feet, inches));
	else
		printf("Invalid input\n");
	return 0;
}










