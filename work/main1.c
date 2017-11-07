#include <stdio.h>
#include "task1.h"

int main(){
	char gender;
	float height, weight;
	int recomendation;
	printf("Enter your gender, height and weight like this - (gender(m or w);height;weight)\n");
	if (scanf("(%c;%f;%f)",&gender,&height,&weight) == 3 && (gender == 'm' || gender == 'w')){
		recomendation = getRecomendation(gender, height, weight);
		switch (recomendation){
			case -1:
				printf("Eat more food");
				break;
			case 0:
				printf("You are in a good shape");
				break;
			case 1:
				printf("You so fat");
				break;
			default:
				printf("Smt wrong");
		}
	}else{
		printf("Incorrect input");
	}
	return 0;
}
