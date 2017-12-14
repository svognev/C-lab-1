#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0, inches = 0;
	printf("Enter number(x`xx):");
	scanf("%d`%d", &feet, &inches);
	printf("%d`%dfeet = %.2fcm\n", feet, inches, convert(feet, inches));
	return 0;
}