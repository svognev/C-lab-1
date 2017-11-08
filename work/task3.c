//
//  task3.c
//  task3
//
//  Created by Igor T on 11/6/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task3.h"
#include <string.h>
#include <ctype.h>
#include <math.h>

char * convert(char buf[], double angle, char type){
    if (type == 'R' || type == 'r' ) {
//        changing angle from rads to degree
        angle = (angle * 180)/ M_PI;
        type = 'D';
    }
    else  {
        angle = (angle *  M_PI) / 180;
        type = 'R';
    }
    
//    converting back to string
    sprintf(buf, "%f%c", angle, type);
    return buf;
}
