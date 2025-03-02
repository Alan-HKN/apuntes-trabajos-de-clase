#include<stdio.h>

void main(){
    char *mensaje1 = "hola";
    char *mensaje2[] = {"Hola","Mundo"};

    for (int i = 0; i < 2; i++){ //recorre los renglones
        for (int j = 0; j < 5; j++){ //recorre las columnas
    printf("%c", mensaje2[i][j]);
    }
    printf("\n");
 }
    printf("\n");

}