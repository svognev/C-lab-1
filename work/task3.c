#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char *convert(char buf[50], double angle, char type)
{
	char *str_buf;
	double rez;
	
	if (type=='R')
	{
		rez = (angle*180) / 3.14;
		sprintf(buf, "%lf%c", rez, 'D');
		str_buf = buf;
	}
	else
	{
		rez = (angle*3.14) / 180;
		sprintf(buf, "%lf%c", rez, 'R');
		str_buf = buf;
	}
	return str_buf;
}