#include <stdio.h>

char* convert(char buf[], double angle, char type){
	double k = 57.29577951308232; 
	if (type == 'D'){
		angle = angle / k;
		sprintf(buf, "%.05lf%c", angle, 'R');
	}else{
		angle = angle * k;
		sprintf(buf, "%.02lf%c", angle, 'D');
	}
	return buf;
}
