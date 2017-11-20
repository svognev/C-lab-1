#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{

	char gender='z';
	float height = 0, weight = 0;
		printf("Enter your gender (m-man, w-woman), hight and weight. Example: m, 175, 70\n");
		scanf("%c, %f, %f", &gender, &height, &weight);
	
	int result = getRecommendation(gender, height, weight);
		
	switch(result)
		{
		case  1:	printf("Yon need to lose weight!\n");break;
		case -1:	printf("Yon need to gain weight!\n");break;
		case  0:	printf("Your weight is perfect!\n");break;
		case  2:	printf("Incorrect gender!\n");break;
		}
system("pause");
return 0;
}

