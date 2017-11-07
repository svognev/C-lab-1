
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task1.h"

int main()// the programm that prompts the users : gender, height and weight, 
          //and then analyzes the ratio height and weight 
	      //and recomendation for further action
{
	char gender="E";//the variable that assigns the first letter of gender
	float height=0, weight=0;//variables of height and weight
	printf(" Enter your gender :");//request enter gender
	scanf("%c", &gender);//associate first letter with the variable
	rewind(stdin);// clear the memory buffer
	printf("\n Enter your height :");// request enter height 
	scanf("%f",&height);// associate height with the variable
	rewind(stdin);// clear the memory buffer
	printf("\n Enter your weight :");//request enter weight
	scanf("%f", &weight);// associate height with the variable
	//int getRecommendation(char gender, float height, float weight);
	int checkRecomndation = getRecommendation(gender, height, weight);// the variable  takes a value from verify function :'1' or '-1' or '0'
	if (checkRecomndation == 0)// check: if weight the ideal that :
		printf("You have ideal weight\n");// if condition true, that  print the recomendation
	else
	{
		if (checkRecomndation < 0)// condition check: if weight > ideal: 
			printf("You need to gain weight\n");//if condition true, that  print the recomendation
		else
			printf("You need to lose weight\n");//If condition false, that print recomendation
	}

	return 0;
}