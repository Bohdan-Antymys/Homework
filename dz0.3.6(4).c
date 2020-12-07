#include <stdio.h>
#include <math.h>

void func (float number){
    float fx = atan (number);
    printf ("f(x) = arctg(x) = %f\n", fx);
}

void derivative (float num){
    float f1x = (1 / (pow(num, 2) + 1));
    printf ("f`(x) = (1 / (x^2) + 1) = %f\n", f1x);
}

main() {
    float x;
    
    printf ("Enter the value of x = ");
    scanf ("%f", &x);
    
    func(x);
    derivative(x);
    
}

