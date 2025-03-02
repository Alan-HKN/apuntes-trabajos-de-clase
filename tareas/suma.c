#include <stdio.h>

void sumadeN(int n, int *suma) {
    *suma = 0;
    for (int i = 1; i <= n; i++) {
        *suma += i * i;
    }
}

int main() {
    int resultado;

    sumadeN(4, &resultado);

    printf("La suma de los cuadrados de los primeros 4 números naturales es: %d\n", resultado);

    return 0;
}
