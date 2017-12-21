#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

char * convert(char buf[], double angle, char type)
{
    
    if (type == 'R' || type == 'r')
	{
		sprintf(buf, "%.3lf", ((angle * 180) / 3.14)); // в градусы
		return buf;
	}
    else if (type == 'D' || type == 'd')
	{
		sprintf(buf, "%.3lf", ((angle * 3.14) / 180)); // в радианы
		return buf;
	}
    return ("Error");
    
}