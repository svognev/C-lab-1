#include <stdio.h>
#include "task4.h"

int main()
{
	int feet, inches;

	printf("Input height (feet'inches): \n");
	scanf("%d'%d", &feet, &inches);

	printf("Converted value: %d'%d = %4.1f sm \n", 
		feet,
		inches,
		convert(feet, inches));

	return 0;
}