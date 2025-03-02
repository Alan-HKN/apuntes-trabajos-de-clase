#include<stdio.h>

#define MAX 5
#define MIN 1

int m[MAX][MAX];

void llenarmatriz();
void mostrarmatriz();
void escalarmatriz(int k);

void main(){
    llenarmatriz();
    mostrarmatriz();
    escalarmatiz(5);
    mostrarmatriz();
}
 
 

void llenarmatriz(){
for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++){
        m[i][j] = j+1;
    }
  }
}

void mostrarmatriz(){
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}

void escalarmatiz(int k){
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            m[i][j] = m[i][j] * k;
        }
}
}