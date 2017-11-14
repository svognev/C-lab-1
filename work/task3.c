//
//  task3.c
//  problem2
//
//  Created by Ksenia on 09.11.17.
//  Copyright © 2017 Ksenia. All rights reserved.
//
#include <stdio.h>
#include "task3.h"
#define M_PI 3.141592653589793



char* convert(char buf[], double angle, char type)

{
    if(type == 'R')
    {
        sprintf(buf, "%.4lf%c", angle*(180./M_PI),'D');
       
    }
    else if(type == 'D')
    {
        sprintf(buf, "%.4lf%c", angle*(M_PI/180.),'R');
       
    }

    return buf;
    
}


