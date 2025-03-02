#include<stdio.h>
int tabla(int numero, int veces);
int leer_numero(char *mensaje);
int multiplicar(int a, int b);

void main(){
    int numero = leer_numero("introduce un numer: ");
    int veces = leer_numero("introduce las veces: ");
    tabla(numero, veces);
    printf("ICI agradece su preferencia\n");
}
//escriba una funcion que realice la multiplicacion
//argumentos en funciones 


    int leer_numero(char *mensaje){
        int numero;
        printf("%s", mensaje);
        scanf("%d", &numero);
        return numero;
    }
    int tabla(int numero, int veces){
        for(int i=1; i<=veces; i++){
            printf("%d * %d = %d\n", numero, i, multiplicar(numero, i));
        }
    }


int multiplicar(int a, int b){  //prototipos de funciones
    return a*b;   
}   
 

