//
//  main.c
//  C-lab-1
//
//  Created by Ksenia on 02.11.17.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include "task1.h"

    int main(void)

   {
       char gender; float height, weight;
          int result;
      
       printf("Input your gender. Enter w(W) or m(M): \n");
       scanf("%c", &gender);
    
    
      switch (gender) {
           case 'm':
           case 'M':
             //  printf("next...\n");
               break;
           case 'w':
           case 'W':
             //  printf("next...\n");
               break;
           default:
               printf("Choose your gender again.\n");
               return 1;
       }
      

       printf("input your height in santimetres: \n");
       scanf("%f", &height);
       //input your weight
       printf("Input your real weight: \n");
       result=scanf("%f", &weight);
       
       printf("%d\n", (getRecommendation(gender,height, weight)));

       return 0;
   }
