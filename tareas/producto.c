#include <stdio.h>

void productoPorEscalar(int arreglo[], int n, int escalar, int resultado[]) {
    for (int i = 0; i < n; i++) {
        resultado[i] = arreglo[i] * escalar;
    }
}

int main() {
    int arreglo[] = {5, 2, 6};
    int n = 3; 
    int escalar = 2;
    int resultado[n];

    productoPorEscalar(arreglo, n, escalar, resultado);

    printf("El producto del arreglo por el escalar %d es:\n", escalar);
    for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
