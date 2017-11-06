#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	float result = 0;
	const float pi = 3.14159;
	if (type == 'D')
	{
		result = pi * angle / 180;
		sprintf(buf, "%.5f%c\n",result , 'R');
		
	}
	else if (type == 'R')
	{
		result = 180 * angle / pi;
		sprintf(buf, "%.5f%c\n", result, 'D');
	}
	else
		sprintf(buf, "%s\n", "Неверный ввод данных\n");
	return buf;
}