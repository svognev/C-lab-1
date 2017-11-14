"//
//  main3.c
//  problem2
//
//  Created by Ksenia on 09.11.17.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include "task3.h"
#define SIZE 64

int main()
{
    char type, buf[SIZE];
    double angle;
    int result;
    printf("Input value in Degrees or in Radians 00.0D(R):\n");
    result = scanf("%lf%c", &angle, &type);
    
    switch (type) {
        case 'D':
            
            break;
        case 'R':
           
            break;
        default:
            printf("Not valid data. Try again.\n");
            return 1;
    }
    
   printf("%s\n",
          (convert(buf,angle,type)));
    return 0;
}
#test line
