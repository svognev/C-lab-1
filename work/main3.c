#include<stdio.h>
#include"task3.h"

int main()
{
	char type;
	double angle;
	char buf[20];
		printf("Enter the angle in degrees or radians:\n"
			"radians---> 45.00R\n"
			"degrees---> 45.00D\n");
		scanf("%lf%c", &angle, &type);
		if (type == 'D' || type == 'd' || type == 'R' || type == 'r')
			printf("%s\n", convert(buf, angle, type));
		else
			printf("Invalid input\n");
		return 0;
}