#include <math.h>
#include <stdio.h>
 
int main (){
    int N;
    int max, min;
    printf ("N = ");
    scanf ("%d", &N);
    int r = N - 1;
    
    int A[N], a[N];
    
    for (int i = 0; i < N; i++){
        scanf ("%d", &A[i]);
    }
    for (int j = 0; j < r; j++){
        if (A[j] > A[j + 1]){
            max = A[j];
        }
        else {
            max = A[j + 1];
        }
    }
    for (int o = 0; o < r; o++){
        if (A[o] > A[o + 1]){
            min = A[o + 1];
        }
        else {
            min = A[o];
        }
    }
    
    int sach = ((min + max) / 2);
    printf ("Sach = %d", sach);
    int min_1 = 0;
    for (int y = 0; y < N; y++){
        a[y] = sach - A[y];
        for (int q = 0; q < r; q++){    
            if (a[q] < a[q + 1]){
                min_1 = a[q];
            }
            else {
                min_1 = a[q + 1];
            }
        }
    }
    printf ("element is %d", (min_1 + sach));
}