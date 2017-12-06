#include<stdio.h>
#include"task2.h"

int main()
{
	int hour = -1, min = -1, sec = -1;
	printf("Enter the current time (h:m:s)\n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	if (sec < 0 && sec>59)
	{
			printf("Uncorrect time!");
		return 1;
	}
	else
	{
		char* line = greet(hour, min);
		printf("%s", line);
		return 0;
	}
	}
