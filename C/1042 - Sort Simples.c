#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {      
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                troca(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int numeros[3];

    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

    int numeros_originais[3];
    for (int i = 0; i < 3; i++) {
        numeros_originais[i] = numeros[i];
    }

    bubbleSort(numeros, 3);

    printf("%d\n%d\n%d\n\n", numeros[0], numeros[1], numeros[2]);

    printf("%d\n%d\n%d\n", numeros_originais[0], numeros_originais[1], numeros_originais[2]);

    return 0;
}