#include <stdio.h>
#include "task2.h"
int main()
{
	int hour, min, sec;
	printf("Enter time(HH:MM:SS) \n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	
	printf("%02d:%02d:%02d \n", hour, min, sec);

	if (greet(hour, min) == "Good morning!")
		printf("Good morning! \n");

	else if (greet(hour, min) == "Good night!")
		printf("Good night! \n");

	else if (greet(hour, min) == "Good day!")
			printf("Good day! \n");

	else if (greet(hour, min) == "Good afternoon!")
		printf("Good afternoon! \n");

	else if (greet(hour, min) == "Uncorrect time!")
		printf("Uncorrect time! \n");

	return 0;
}