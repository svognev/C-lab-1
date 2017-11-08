//
//  main.c
//  task4
//
//  Created by Igor T on 11/7/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task4.h"

int main() {
    int feet = 0;
    int inches = 0;
    
    printf("Please enter your height in inches & feets:\n");
    scanf("%d'%d", &feet, &inches);

    printf("Your height in metric system is: %f\n", convert(feet, inches));
    return 0;
}
