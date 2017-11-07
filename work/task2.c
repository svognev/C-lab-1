//
//  task2.c
//  task2
//
//  Created by Igor T on 11/1/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task2.h"

char* greet(int hour,int min)
{
 
    if (hour < 6 && hour >= 0) {
        return "good night\n";
    } else if (hour > 6 && hour < 11) {
        return "good morning\n";
    }
    else if (hour >= 11 && hour < 18) {
        return "good day\n";
    }
    else if (hour >= 18 && hour < 24) {
        return "good evening\n";
    } else {
        return "Incorrect time!"; 
    }
    
//    switch(int hour) {
//        case 'hour < 6' :
//            return "Good night!";
//            break;
//        case 'B' :
//        case 'C' :
//            preturn "Good morning!";
//            break;
//        case 'D' :
//            return "Good day!";
//            break;
//        case 'F' :
//            return "Good evening!";
//            break;
//        default :
//            return "Uncorrect time!";
//    }
    return NULL;
}
