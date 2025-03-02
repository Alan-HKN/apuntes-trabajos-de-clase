//operadores aritmeticos

#include<stdio.h>
void main(){
    int a, b=3;
    a = 10;
    printf("el valor de a es: %d\n", a);
    printf("el valor de b es: %d\n", b);
  //suma
  printf("la suma de %d+%d es: %d\n", a, b, a+b);
  //resta
  printf("la resta de %d-%d es: %d\n", a, b, a-b);
  //multiplicacion
   printf("la multiplicacion de %d*%d es: %d\n", a, b, a * b);
  //division
  printf("la divison de %d/%d es: %f\n", a, b, a / (float)b);
   //modulo
   printf(" %d: %f\n", a, b, a / (float)b);


   float c= 10.5;
   float d = 3;
   printf("la divison de %f/%d es : %f\n", c, d, c / d);  //casting implicito

   float e = 3.6;
   printf("la division de %f/%f es: %f\n" , c, e, c / e);
   
   int contador = 0;
   contador ++;  //incremento en 1, contador = contador + 1
   printf("el valor de contador es %d\n", contador);
   contador --;  //decremento en 1, contador = contador - 1
   printf("el valor de contador es %d\n", contador);
   contador += 5;  //incremento en 5, contador = contador + 5
   printf("el valor de contador es %d\n", contador);
   contador -= 2;  //decremento en 2, contador = contador -2
   printf("el valor de contador es %d\n", contador);
}
