#include <stdio.h>
#include <stdlib.h>


void output_matrix (float** matrix, int m, int n)
{   
    // вивести матрицю на екран
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5.2g", matrix[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int m, n; 
    
    printf("m = ");  // к-кість рядків
    scanf("%d", &m);
    
    printf("n = ");  // к-кість стовпців
    scanf("%d", &n);
    
    //введемо матрицю
    float** matrix = calloc(m, sizeof(*matrix));
    for (int i = 0; i < m; i++) {
        matrix[i] = calloc(n, sizeof(*matrix[i]));
        for (int j = 0; j < n; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    
    printf("Your matrix:\n");
    output_matrix(matrix, m, n);
    
    //  знайдемо перший та останній рядки, що складаються з позитивних елементів
    int first = -1, last = -1;
    for (int j = 0; j < n; j++) {
        int cnt = 0;
        for (int i = 0; i < m; i++) {
            if (matrix[i][j] >= 0) cnt++;
        }
        if (cnt == m) {
            if (first == -1) first = j;
            else last = j;
        } 
    }
    
    if (first == -1 || last == -1) {
        printf("Impossible to swap columns. There are no 2 such columns.\n");
    } else {
        printf("Matrix after column swapping:\n");
        for (int i = 0; i < m; i++) {
            float a = matrix[i][first];
            matrix[i][first] = matrix[i][last];
            matrix[i][last] = a;
        }
        output_matrix(matrix, m, n);
    }

    return 0;
}

