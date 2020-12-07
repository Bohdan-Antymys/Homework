#include <stdio.h>

main(){
    
    int n;
    float y, i, S = 0, S1, t;
    
    printf ("Enter n = ");
    scanf ("%d", &n);
    
    for (i = 1; i <= n + 1; i++) {
        
        printf ("Enter");
        scanf ("%f", &y);
        
        if (y < 10 and y > 0){ 
        
            S = S + y;
        }    
        else {
            
            S1++;
        }
    }
    
    t = S + S1;
    printf ("S = %f\n", t);
} 