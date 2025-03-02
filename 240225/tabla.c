#include<stdio.h>
//almacene en un array el resultado de las tablas de multiplicar de un numero

void main(){
    short int num = 2;
    int n[]= {0,0,0,0,0,0,0,0,0,0};
    for(int i=0; i<10; i++){
        n[i] = num*(i+1);
        printf("%d X %d = %d \n", num, i+1, n[i]);
    }
}