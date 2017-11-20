//
//  task1.c
//  C-lab-1
//
//  Created by Ksenia on 02.11.17.
//  Copyright © 2017 Ksenia. All rights reserved.
//
#include <stdio.h>

int getRecommendation(char gender, float height, float weight)
{
    if (gender == 'm')
    {
        if(weight - (height - 100) == 0) {
        printf("You have a normal weight!\n");
        return 0;
        }
        if(weight - (height - 100) > 0) {
        printf("You must take a diet!\n");
        return 1;
        }
        else {
        printf("You must increase you weight!\n");
        return -1;
        }
    
    }
    
if (gender == 'w')
    {
        if(weight - (height - 110) == 0){
        printf("You have a normal weight!\n");
        return 0;
        }
        if(weight - (height - 110) > 0){
        printf("You must take a diet!\n");
        return -1;
        }
        else {
        printf("You must increase you weight!\n");
        return -1;
        }
    }
    
    else {
        printf("Try again!\n");
        return 1;
        }
}

