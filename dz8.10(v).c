#include <math.h>
#include <stdio.h>
 
int main (){
    
    int n, z;
    printf ("Enter n = ");
    scanf ("%d", &n);
    
    z = n / 2;
    float A[n], a[z];
    
    for (int i = 0; i < n; i++){
        
        scanf ("%f", &A[i]);
        printf ("A = %f\n", A[i]);
        if ((i % 2) + 1 == 0){
            
            a[i - 1] = A[i];
            printf ("a[] = %f\n", a[i - 1]);
        }
    }
    
    float max = 0, a1, a2;
    
    for (int j = 0; j < z - 1; j++){
        if (a[j] > a[j + 1]){
            max = a[j];
            
        } 
        else {
            max = a[j + 1];
        }
        
    }
    printf ("max = %f", max);
}