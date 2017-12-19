#include <stdio.h>
#include "task1.h"

int main() 
{
    char gender;
    float height; 
    float weight;
    
    printf ("Enter your gender (m or w), height, weight:\n");
    scanf ("%c %f %f", &gender, &height, &weight);
    
    if (getRecommendation (gender, height, weight) == -1)
    {
        printf ("Ves nedostatochen");
    }
    else if (getRecommendation (gender, height, weight) == 1)
    {
        printf ("Ves izbitochen");
    }
    else if (getRecommendation (gender, height, weight) == 0)
        printf ("Ves idealen");
        
    return 0;
}
