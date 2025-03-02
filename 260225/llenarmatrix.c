#include<stdio.h> //rutas relativas
//#include"./hola.h" //rutas absolutas

#define MAX 3
#define MIN 1

void main(){
    int matrix[MIN][MAX] = {{1,2,3},{1,2,3},{1,2,3}};
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d", matrix[i][j]);
    }
    printf("\n");
   }
}