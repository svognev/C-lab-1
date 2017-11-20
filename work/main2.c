#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"
int main()
{
	int min = 0, hour = 0, sec = 0;
	char sim = ':';
	printf("What time is it? (Example hh:mm:ss)\n");
	
		scanf("%d%c%d%c%d",&hour,&sim,&min,&sim,&sec);
		if (sec < 0 || sec >60)
		{
			printf("Uncorrect time!\n");
			system("pause");
			return 1;
		}
		printf("%s\n", greet(hour, min));
		system("pause");
	return 0;
}