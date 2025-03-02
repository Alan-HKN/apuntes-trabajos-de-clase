//estructuras repetitivas 
//1.-inicio
//2.-condicion de termino, mecanismo de termino
//3.-incremento o decremento
//4.-cuerpo del ciclo
//1.-for
//2.-while
//3.-do-while
#include<stdio.h>
void mi_for();
void mi_while();
void mi_do_while();

void main (){
    mi_for();
    mi_while();
    mi_do_while();
}

void mi_for(){
    printf("esctructura repetitiva for\n");
    int i;
    for(i = 0; i< 10; i++){
        printf("i: %d\n", i);
    }
}

void mi_while(){
    printf("esctructura repetitiva while\n");
    int i = 0;
    while(i < 10){
        printf("i: %d\n", i);
        i++;
    }
}

void mi_do_while(){
    printf("esctructura repetitiva do-while\n");
    int i =0;
    do {
        printf("i: %d\n", i);
        i++;
    }while (i < 10);
    
}