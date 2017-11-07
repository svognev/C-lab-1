#include <stdio.h>
#include "task2.h"

int main(){
	int hour, sec, min;
	printf("Enter time : hh:mm:ss\n");
	if (scanf("%02d:%02d:%02d", &hour, &min, &sec) == 3 && 
	    hour < 24 &&
	    min < 60 &&
	    sec < 60){
		printf("%s\n", greet(hour, min));
	}else{
		printf("Uncorrect input\n");
	}
}
