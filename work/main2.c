# include <stdio.h>
# include "task2.h"
//#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int hour, min, sec, result;

	printf("Please enter the current time format HH:MM:SS \n");
	result = scanf("%d:%d:%d",&hour, &min, &sec);
	
	if (result < 3)
		printf("Uncorrect time!\n");
	

	else 
		printf("%s\n", greet(hour, min));

	return 0;
}