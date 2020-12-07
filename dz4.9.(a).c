#include <stdio.h>
#include <math.h>

void main () {
    
    int n;
    float x, sum = 0;
    
    printf ("Enter n = ");
    scanf ("%d", &n);
    printf ("Enter x = ");
    scanf ("%f", &x);
    
    if (x < 1) {
        
        for (int i = 0; i <= n; i++) {
            
            sum += (i * (pow (x, i-1)) + ((i - 1) * pow (x, i - 2)));
            printf ("sum = %f\n", sum);
        }
    }
    printf ("sum = %f\n", sum);
}