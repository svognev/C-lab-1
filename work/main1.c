#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include <locale.h>
//#include <Windows.h>


int main()
{
	//setlocale(LC_ALL, "Rus");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	char gender;
	float height;
	float weight;
	int check,result;
	printf("Укажите ваш пол,рост,вес:\n");
	check=scanf("%c,%f,%f", &gender, &height,&weight);
	if (check != 3)
	{
		printf("Неверный ввод\n");
		return 0;
	}

	result = getRecommendation(gender, height, weight);
	switch (result)
	{
	case 1:
		printf("Вес избыточен\n");
		break;
	case -1:
		printf("Вес недостаточен\n");
		break;
	case 0:
		printf("Вес идеален\n");
		break;
	default:
		printf("Ошибка\n");
		break;
	}


	return 0;
}