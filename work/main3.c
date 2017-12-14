#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[20], type;
	float angle;
	printf("Enter data(format 45.00D): ");
	scanf("%f%c", &angle, &type);
	printf("%s\n", convert(buf, angle, type));
	return 0;
}