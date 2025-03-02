
//tipos de literales primitivos :int, float, double, char, void
//modificadores de tipo de datos: signed, unsigned,shorth, long
//palabras reservadas:
//contasntes:const
#include <stdio.h>
#define PI 3.1416
#define Lunes 1
void main(){
    const double Pi=3.1416;
    int numero_1 = 10;
    printf("El valor de numero_1 es %d\n", numero_1);
    numero_1 = 3.1416;
    printf("El valor de numero_1 es %f\n", (float)numero_1);
    const int numero_2 = 20; //en tiempo de compilacion
   
    numero_1 = 30;
    printf("el valor de numero_1 es: %d\n", numero_1);
    printf("el valor de Pi es: %2.5F\n", Pi);
    printf("el valor de PI es: %2.5F\n", PI);

    //byte = 8 bits
    //
}