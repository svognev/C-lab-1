//
//  task1.c
//  main1
//
//  Created by Igor T on 11/1/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task1.h"
#include <string.h>

int getRecommendation(char gender, float height, float weight)

{
    char w [1] = "w";
    char m [1] = "m";
    if (strncmp(&gender, w, 1) == 0 ) {
        int idealWomanWeight = 0;
        idealWomanWeight = height - 110;
        
        if (weight == idealWomanWeight) {
            return 0;
        } else if (weight > idealWomanWeight){
            return 1;
        } else {
            return -1;
        }

    } else if (strncmp(&gender, m, 1) == 0 ) {
        int idealManWeight = 0;
        idealManWeight = height - 100;
        
        if (weight == idealManWeight) {
            return 0;
        } else if (weight > idealManWeight){
            return 1;
        } else {
            return -1;
        }
        
    }
    return 2;
}
