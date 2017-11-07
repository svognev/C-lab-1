#include <stdio.h>
//#include <locale.h>
#include "task1.h"

int main()
{
	//setlocale(LC_ALL, "Russian");
	char gender;
	float height = 0;
	float weight = 0;
	printf("Enter your gender (m/w), height (in centimeters) and weight (in kilogrammes).\n"
		//"Do it in the form: gender, height, weight:\n\n");
		"For example: w,174,63 \n\n");
	scanf("%c, %f, %f", &gender, &height, &weight);
	
	/*if (getRecommendation(gender, height, weight) == -1)
		printf("Your weight is insufficient. \n\n");
	else if (getRecommendation(gender, height, weight) == 0)
		printf("Your weight is perfect. \n\n");
	else if (getRecommendation(gender, height, weight) == 1)
		printf("Your weight is excess. \n\n");
	else
	{
		printf("Data or the gender entered incorrectly.\n"
			"Please, retype. \n\n");
		return 1;
	}*/
	switch (getRecommendation(gender, height, weight))
	{
		case -1:
			printf("Your weight is insufficient. \n\n");
		//	printf("Ваш вес недостаточен. \n\n");
			break;

		case 0:
			printf("Your weight is perfect! \n\n");
		//	printf("Ваш вес идеален! \n\n");
			break;

		case 1:
			printf("Your weight is excess. \n\n");
		//	printf("Ваш вес избыточен. \n\n");
			break;

		default:
		{
			printf("\nData or the gender entered incorrectly.\n"
				"Please, retype. \n\n");
			return 1;
		}
		break;
		
	}
	return 0;


}