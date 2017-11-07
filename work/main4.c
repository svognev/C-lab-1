#include <stdio.h>
#include "task4.h"

int main(){
	int feet, inches;
	float sant;
	printf("Enter (feet'inches) : \n");
	scanf("(%d'%d)", &feet, &inches);
	sant = convert(feet, inches);
	printf("%.01f - santimiters", sant);
	return 0;
}
