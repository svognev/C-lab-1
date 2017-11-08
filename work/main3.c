//
//  main.c
//  task3
//
//  Created by Igor T on 11/6/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task3.h"

int main(int argc, const char * argv[]) {
    
    float angle = 0;
    char type = 0;
    char buf = 0 ;
    
    printf("please input your data\n");
    scanf("%f%c", &angle, &type);
    printf("angle is %f and type is %c\n", angle, type);
    
    printf("the result of conversion would be: %s\n", convert(&buf, angle, type));
    return 0;
}
