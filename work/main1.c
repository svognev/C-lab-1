//
//  main.c
//  main1
//
//  Created by Igor T on 11/1/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task1.h"

void
clearFunc (void)
{
    while ( getchar() != '\n' );
}

int main()
{
    //      init weight, height
    float weight = 0, height = 0;
    //       init gender
    char gender;
    //       adding another variable for result from a getRecommendation function
    int result;
    //       getting data from user:
    printf("please, input your gender, w or m only \n");
    scanf("%c", &gender);
    printf("please enter your weight \n");
    scanf("%e", &weight);
    //       clearing stdio
    clearFunc();
    printf("and height\n");
    scanf("%e", &height);
    result = getRecommendation(gender, height, weight);
    if (result == 0) {
        printf("You weight is ideal \n");
    } else if (result == -1 ) {
        printf("Not enought food, please eat more \n");
    } else if (result == 2 ){
        printf("there is something wrong with an input please check and come back again \n");
    } else {
        printf("Please get yourself a gym pass, or soon you wouldn't be able to move your ass \n");
    }
    return 0;
}
