#include <stdio.h>
#include <math.h>

void main () {
    
    float x1 = -99, x2 = -99, x3, min = 1000;
    int n;
    
    printf ("Enter n = ");
    scanf ("%d", &n);
    
    for (int i = 3; i <= n; i++){
        x3 = x2 + x1 + 100;
        x1 = x2;
        x2 = x3;
        printf ("x = %f\n", x3);
        if (x3 > 0){
            if (x3 < min) min = x3;
        }
        printf ("min = %f\n", min);
        
    }
    
    
    
}   

