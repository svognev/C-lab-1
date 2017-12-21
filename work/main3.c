#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main() 
{
    char buf[20]; 
    double angle = 0;
    char type;
    
    printf ("Enter value (angle, type(R or D): ");
    scanf ("%lf%c", &angle, &type);
      
    printf("%s\n", convert(buf, angle, type));
            
    return 0;
}

