//
//  main.c
//  task2
//
//  Created by Igor T on 11/1/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task2.h"


int main()
{
    int hour, min, sec;
    printf("Please enter time in HH:MM:SS format\n");
    scanf ("%d:%d:%d", &hour, &min, &sec);
    if (sec > 60 || sec < 0) {
        printf("Time is incorrect(seconds)!\n");
        return 1;
    }
    printf("%s", greet(hour, min));
}
