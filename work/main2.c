#include <stdio.h>
#include "task2.h"

int main()
{
	int hour = -1;
	int min = -1;
	int sec = -1;
	printf("Enter the current time\n"
		"Do it in the form: HH:MM:SS\n\n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	if (sec > 59 || sec < 0)
	{
		printf("\nUncorrect time!\n\n");
		return 1;
	}
	else
	{
		char* res = greet(hour, min);
		//puts(res);
		printf("\n%s\n\n", res);
	}
	
	return 0;

}