#include <stdio.h>
#include "Task1.h"

int getRecommendation(char gender, float height, float weight)
{
	int genderchoise;
	
	if (gender == 'm')
		genderchoise = 100;
	else if (gender == 'w')
		genderchoise = 110;
	else
		return 2;
	
	if ((height - genderchoise) < weight)
		return -1;
	else if ((height - genderchoise) > weight)
		return 1;
	else
		return 0;
}