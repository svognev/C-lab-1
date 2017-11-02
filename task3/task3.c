#include "task3.h"
#include <string.h>

char * convert(char buf[], double angle, char type) {
	if (strcmp(type, "R"))
	{
		buf = ("%f%s", (angle * 57.2958), "D");
		return &buf;
	}
	if (strcmp(type, "D"))
	{
		buf = ("%f%s", (angle / 57.2958), "R");
		return &buf;
	}
	else
		return ("Error!");
}
