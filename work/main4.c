//
//  main.c
//  lesson4
//
//  Created by Ksenia on 12.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include "task4.h"

int main() {
    int feet, inches, result;
    printf("Input feet'inches: \n");
    result=scanf(("%i'%i"), &feet, &inches);
    if (result<2)
    {
        printf("Not valid data\n");
        return 1;
    }
    printf("%.2f santimeters\n",
           convert((float)feet, (float)inches));
    return 0;
    
}
