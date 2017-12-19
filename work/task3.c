#include "task3.h"

char * convert(char buf[], double angle, char type)
{
	switch (type)
	{
		case 'R':;
		case 'r':{sprintf(buf, "%.1f%c\0", (angle * 180) / 3.14159, 'D'); }break;
		case 'D':;
		case 'd':{sprintf(buf, "%.5f%c\0", (angle * 3.14159) / 180, 'R'); }break;
	}
	return buf;
}