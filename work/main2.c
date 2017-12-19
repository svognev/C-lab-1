#include <stdio.h>
#include "task2.h"

   int main()
   {
       int hour;
       int min;
       int sec;
       
       printf ("Enter time (hours:min:sec): ");
       scanf ("%d %d %d", &hour, &min, &sec);
       
       printf (greet(hour, min));
       
       return 0;
       /*
       // время с 00:00 до 06:00
       if (greet(hour,min) == 1) 
       {
           printf("Good night!");
       }
       // время с 06:00 до 11:00
       else if (greet(hour,min) == 2) 
       {
           printf ("Good morning!");
       }
       // время с 11:00 до 18:00
       else if (greet(hour,min) == 3) 
       {
           printf ("Good day!");
       }
       // время с 18:00 до 00:00
       else if (greet(hour,min) == 4) 
       {
           printf ("Good evening!");
       } 
       else
           printf ("Uncorrect time!");

       return 0;
        */
   }