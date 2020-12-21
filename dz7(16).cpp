#include <stdio.h>
#include <stdlib.h>
#define MAX 20  // вважатимемо найбільшою можливою довжиною массива


int main()
{
    
    int* arr = calloc(MAX, sizeof(*arr));
    int N;
    printf("N = ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    

    int keys[MAX];
    int values[MAX];
    int k = 0;  // індекс першої зліва вільної комірки
    int arr[] = {7, 1, 1, 12, 54, 1, 0, 54, 12, 12};
    int max = 0; // найбільша кількість входжень
    for (int i = 0; i < MAX; i++) {
        int cnt = 0, cnt0 = 0; // cnt0 - к-кість входжень arr[i] в масив
        for (int j = 0; j < MAX; j++) {
            if (arr[i] != keys[j]) {
                cnt++;
            }
            if (arr[j] == arr[i]) {
                cnt0++;
            }
        }

        if (cnt == MAX) {
            if (cnt0 > max) {
                max = cnt0;
            }
            keys[k] = arr[i];
            values[k] = cnt0;
            k++;
        }

    }

    printf("The most common elements are: ");
    for (int i = 0; i < MAX; i++) {
        if (values[i] == max) {
            printf("%d ", keys[i]);
        }
    }
    printf("\nThese elements appear in the list %d times\n", max);

    system("pause");
    return 0;
}


