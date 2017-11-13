#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"
int main()
{
	int sec, hour, min = 0;
	printf("Could you tell me the time, please?\n");
	scanf("%d %d %d", &hour, &min, &sec);
	if (sec >= 0 && sec <= 59)/*sec ne peredajotsya v greet, proverka budet tut*/ 
	{
		printf("%d:%d:%d\n", hour, min, sec);
		printf(greet(hour, min));
	}
	else printf("Uncorrect time\n");
	
	return 0;
}