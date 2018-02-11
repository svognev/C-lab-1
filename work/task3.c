#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if (type == 'R')
		sprintf(buf, "%lf%c", (angle * 180 / 3.14), 'D');
	else if (type == 'D')
		sprintf(buf, "%lf%c", (angle * 3.14/ 180), 'R');

	return buf;
}
