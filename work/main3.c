#include <stdio.h>
#include "task3.h"

int main(){
	double angle;
	char type;
	char str[9];
	printf("Enter angle and type: (ex: 45.00D or 45.00R)\n");
	scanf("%lf%c", &angle, &type);
	printf("%s", convert(str, angle, type));
	return 0;
}
