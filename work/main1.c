#include "task1.h"
#include <stdio.h>


void clean_stdin()
{
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{
	char gender = '_';	
	float height = 0.0;	//Рост
	float weight = 0.0;	//Вес
	printf("Enter your gender (m - men or w - woman): ");	//Введите пол
	scanf("%c", &gender);
	clean_stdin();
	printf("Enter your height ");	//Введите рост
	scanf("%f", &height);
	printf("Enter your weight ");	//Введите вес
	scanf("%f", &weight);

	switch (getRecommendation(gender, height, weight)) {
	case 1:
		printf("lose weight\n");
		break;
	case -1:
		printf("gain weight\n");
		break;
	case 0:
		printf("norma\n");
		break;
	default:
		printf("Err input gender!\n");
	}

	return 0;
}