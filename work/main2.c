#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{
	int hour, min, sec;

	printf("Enter the time [HH:MM:SS]: \n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	
	if ((sec < 0) || (sec > 59))
		printf("Uncorrect time! \n");
	else printf(greet(hour, min));
	
	return 0;	
}