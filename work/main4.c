#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
int main()
{
	int feet = 0,inches = 0;
	char sim;
	printf("Enter value (Example 12'3): \n");
	scanf("%d%c%d%", &feet, &sim, &inches);
	if (sim != '\'')
	{
		printf("Error!\n");
		system("pause");
		return 1;
	}
	printf("%s%f%s\n","Convert value is ", convert(feet, inches)," sm.");
	system("pause");
	return 0;
}