#include <stdio.h>
#include <math.h>

int main () {
    
    float a, x, f;
    
    printf ("Enter a = ");
    scanf ("%f", &a);
    
    printf ("Enter x = ");
    scanf ("%f", &x);
    
    if (a < 0){
        
        f = (logf (1 - a * (x + a))) / (a);
        printf ("f(x) = %f\n", f);
    }
    
    if (a == 0){
        
        f == x;
        
        printf ("f(x) = %f\n", f);
    }
    
    if (a > 0) {
        
        f = (((exp(x * a) - 1) / (a)) + a);
        printf ("f(x) = %f\n", f);
    }
    return 0;
}
