#include <stdio.h>
 
float main () {
    
    float a, b, diff, prod;
    
    scanf ("%f\n", &a);
    scanf ("%f\n", &b);
    
    diff = a - b;
    prod = a * b;
    
    printf ("Difference is %f\n", diff);
    printf ("Product is %f\n", prod);
}