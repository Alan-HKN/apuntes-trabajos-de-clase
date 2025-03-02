#include<stdio.h>
int sumatabla(int num);

void main(){
    int sumatablas[10];

    for(int i=0; i<10; i++){
    sumatablas[i] = sumatabla(i+1); 
    
  }
   for(int i=0; i<10; i++){
    printf("la suma de la tabla de mutipliacr del %d es %d\n", i+1, sumatablas[i]);
}
}

int sumatabla(int num){
    int suma = 0;
    for(int i=0; i<10; i++){
        suma += num*(i+1);
}
return suma;
}