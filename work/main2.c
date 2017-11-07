#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"
//#include <Windows.h>

int main()
{
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	int hour = 0;
	int min = 0;
	int sec = 0;
	int check = 0;
	printf("Введите текущее время в формате ЧЧ:ММ:СС\n");
	check=scanf("%d:%d:%d", &hour, &min, &sec);
	if (check != 3)
	{
		printf("Неверный ввод данных\n");
		return 0;
	}
	if (sec >= 60)
	{
		min = min + sec / 60;
		sec = sec % 60;
	}
	if (min >= 60)
	{
		hour = hour + min / 60;
		min = min % 60;
	}
	if (hour >= 24)
	{
		hour = hour % 24;
	}
		
	printf("%s", greet(hour, min));
	return 0;
}