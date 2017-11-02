#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task1.h"

int main()
{
	char gender[2];
	float height=0, weight=0;
	float ex_weight=0;

	do
	{
		printf("Введите ваш пол: m - для мужчин, w - для женщин\n");
		scanf("%s", gender);
	} while ((strcmp(gender, "m") != 0) && (strcmp(gender, "w") != 0));
			
	printf("Введите ваш рост, см \n");
	scanf("%f", &height);
	printf("Введите ваш вес, кг \n");
	scanf("%f", &weight);

	if (getRecommendation(gender, height, weight)==0)
		printf("Ваш вес идеален \n");
	else if (getRecommendation(gender, height, weight) == 1)
		printf("Ваш вес избыточен \n");
	else if (getRecommendation(gender, height, weight) == -1)
		printf("Ваш вес недостаточен \n");

	return 0;
}
