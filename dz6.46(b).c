#include <math.h>
#include <conio.h>
 
float f(int k){
    float res, x;
    
    printf ("Enter x = ");
    scanf ("%f", &x);
    
    res = ((powf (-1, k) * powf (x, k)) / (powf (k + 1, 2)));
    return res;
}
 
int main(){
    float e;
    printf ("e = ");
    scanf ("%f", &e);
    float previous, current;
    float sum = 0;
    int k = 0;
    current = f(k);
    sum += current;
    k++;
    do{
        previous = current;
        current = f(k);
        sum += current;
        k++;
    } while (abs(current - previous) > e);
 
    printf("sum = %f\n", sum);
 
    return 0;
}