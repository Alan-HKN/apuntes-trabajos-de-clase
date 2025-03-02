#include <stdio.h>
int calcular_promedio(int arr[], int tam);

int main() {
    int tam = 10;
   int arr[10];

    for(int i = 0; i < tam; i++) {
        scanf("%d", &arr[i]);
    }

    int promedio = calcular_promedio(arr, tam);
    printf("El promedio de los elementos del arreglo es %d\n", promedio);

    return 0;
}

int calcular_promedio(int arr[], int tam) {
    int suma = 0;
    for(int i = 0; i < tam; i++) {
        suma += arr[i];
    }

    return suma / tam;
}
