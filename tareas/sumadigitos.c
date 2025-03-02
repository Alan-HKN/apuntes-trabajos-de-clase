#include <stdio.h>

void suma_digitos(int numero, int *suma);

int main() {
    int numero, suma = 0;
    printf("Introduce un número entero: ");
    scanf("%d", &numero);
    
   suma_digitos(numero, &suma);

    printf("La suma de los dígitos de %d es %d\n", numero, suma);
    
    return 0;
}


void suma_digitos(int numero, int *suma) {
    if (numero == 0)
        return;
    *suma += numero % 10;

    suma_digitos(numero / 10, suma);
}
