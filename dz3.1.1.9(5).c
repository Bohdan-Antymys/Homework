#include <stdio.h>
#include <math.h>

int main (){
    float a, b, c, r, x, y;
    
    printf ("Enter the value of a = ");
    scanf ("%f", &a);
    
    printf ("Enter the value of b = ");
    scanf ("%f", &b);
    
    printf ("Enter the value of c = ");
    scanf ("%f", &c);
    
    printf ("Enter the value of radius = ");
    scanf ("%f", &r);
    
    x = a;
    
    float h = 0;
    
    for (int i = 0; i >= pow (c, 2); i++){
        
        y = i + b;
        
        if ((pow (x, 2) + pow (y, 2)) == pow (r, 2)){
            
            h++;
            
            printf ("point of intersection");
            
        }
    }
    printf ("%f", h);
}
