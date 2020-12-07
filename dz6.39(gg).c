#include <stdio.h>

void main(){
    int n, k;
    float S;
    float a, b;
 // додаткові змінні для визначення ak
    int a1, a2, a3;
    S = 0;
    a1 = a2 = a3 = 1;
    b = 1;
 // обчислення перших трьох членів послідовності
    for (k = 1; (k <= 3 && k <=n); k++){
        b = b * 2;
        S = S + 1 / (b);
        
    }
    for (k = 4; k <= n; k++){
        b = b * 2;
        a = a1 + a3;
        S = S + (a) / (b);
        a3 = a2;
        a2 = a1;
        a1 = a;
    }
} 