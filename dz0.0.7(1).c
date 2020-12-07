#include <stdio.h>

float main () {
    float T ;
    float a, b, c;
    a = 1 + (1 / 3);
    b = 1 / (7 + a);
    c = 1 / (4 + b);
    T = 365 + c;
    printf ("%.12f\n", T);
    return 0;
    
    
    
}