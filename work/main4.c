#include <stdio.h>
#include "task4.h"

   int main()
   {
       int feet = 0;
       int inches = 0;
       
       
       printf ("Enter feet and inches (feet'inches): ");
       scanf ("%d'%d", &feet, &inches);
       
       printf("%d'%d = %.1f cm", feet, inches, convert(feet, inches));
       
       return 0;
   } 