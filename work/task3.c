 #define _CRT_SECURE_NO_WARNINGS
  #include "task3.h"
  #include<stdio.h>

 char * convert(char *buf, double angle, char type)
  {
  	if (type == 'R'|| type == 'r') // if type = r then make convert
  	{
 		angle =((180/ 3.14159)*angle);// the convert
  		type = 'D';// check type
  	}
  	else
  	{
		angle = ((angle*3.14159)/180);// if type = d then make convert
  		type = 'R';// check type
  	}	
 	sprintf(buf, "%.5f%c",angle, type);// written to 'buf' outcome
  
  	return buf; //return to main the result
}