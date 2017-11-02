#include "task3.h"

char * convert(char buf[], double angle, char type) {
	if (strcmp(type, "R"))
	{
		sprintf(&buf, "%lf%s", (angle * 57.2958), "D\0");
		return buf;
	}
	if (strcmp(type, "D"))
	{
		sprintf(&buf, "%lf%s", (angle * 57.2958), "R\0");
		return buf;
	}
	else
		return ("Error!");
}
