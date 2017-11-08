#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
	double rad = 0.0174;  // 1 rad = 180 degrees/PI
	double degree = 57.2956;  // 1 degree = PI/180 degrees

	//converting 
	if (type == 'D')
	{
		type = 'R';
		angle = angle * rad;
		sprintf(buf, "%lf%c", angle, type);
		return buf;
	}
	else if (type == 'R')
	{
		type = 'D';
		angle = angle * degree;
		sprintf(buf, "%lf%c", angle, type);
		return buf;
	}
	else if (1)
		printf("Uncorrect value! \n");
	return 0;
}

