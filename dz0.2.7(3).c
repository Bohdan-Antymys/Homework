#include <stdio.h>
#include <math.h>
 
int main (void) {
    
    float a, b, c, a1, b1, c1, anBr, anAr, anCr;
    
    printf ("Enter side a - ");
    scanf ("%f", &a);
    printf ("Enter side b - ");
    scanf ("%f", &b);
    printf ("Enter side c - ");
    scanf ("%f", &c);
    
    a1 = pow(a, 2);
    b1 = pow(b, 2);
    c1 = pow(c, 2);
    
    anAr = acos ((c1 + b1 - a1) / (2 * c * b ));
    anBr = acos ((c1 + a1 - b1) / (2 * c * a ));
    anCr = acos ((a1 + b1 - c1) / (2 * a * b ));
    
    float anA = anAr * (180 / M_PI);
    float anB = anBr * (180 / M_PI);
    float anC = anCr * (180 / M_PI);
    
    printf ("Angle A in degrees = %f\n", anA);
    printf ("Angle B in degrees = %f\n", anB);
    printf ("Angle C in degrees = %f\n", anC);
    printf ("Angle A in radians = %f\n", anAr);
    printf ("Angle B in radians = %f\n", anBr);
    printf ("Angle C in radians = %f\n", anCr);
}
