#include <stdio.h>
#include "task2.h"

int main()
{
	int hours = 0, mins = 0, sec = 0;
	printf("Enter time(format HH:MM:SS): ");
	scanf("%d:%d:%d", &hours, &mins, &sec);
	printf("%s\n",greet(hours, mins));
	return 0;
}
