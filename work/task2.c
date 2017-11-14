//
//  task2.c
//  Lesson2
//
//  Created by Ksenia on 12.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include "task2.h"
char* greet(int hour, int min)
{
    switch (hour) {
        case 01:
        case 02:
        case 03:
        case 04:
        case 05:
            printf("Good night!\n");
            break;
        case 06:
        case 07:
        case 8:
        case 9:
        case 10:
        case 11:
            printf("Good morning!\n");
            break;
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            printf("Good afternoon!\n");
            break;
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
            printf("Good evening!\n");
            break;
        default:
            printf("Input correct time!\n");
        break;
            
    }
    return 0;
}


