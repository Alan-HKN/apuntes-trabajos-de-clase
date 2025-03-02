//escriba un programa que pregunte al usuario el año
// de nacimiento y el año actual, verificando que sean correctos 
// dando un mensaje de error si no, y si son correctos
//imprima la edad de del usuario, ademas que indique si es mayor de edad
// o no, considerando que la mayoria de edad en mexico es a los 18 años

#include<stdio.h>
int leer_aa(char *msg);
int validar_aa(int anac, int aact);
int calcular_edad(int anac, int aact);

void main(){
  int anac, aact, edad;
  anac = leer_aa("Año nacimiento: ");
  aact = leer_aa("año actual: ");
  printf("tu edad es: %d\n", aact-anac);
if(validar_aa(anac,aact)){
    edad=calcular_edad(anac,aact);
    if (edad >=18){
        printf("es mayor de edad\n");
    } else{
        printf("es menor de edad");
    }
    if(calcular_edad)(anac,aact);
}
}

  int validar_aa(int anac, int aact){
    if(anac > aact){
        if (anac > aact){
        printf("error: el año de nacimiento es mayor al año actual");
        return 0; //false
    } else{
        return 1; //true
    }
}
  }
int leer_aa(char * msg){
    int aa;
    printf("%s", msg);
    scanf("%d", &aa);
    return aa;
    }
    int calcular_edad(int anac, int aact){
        return aact - anac;

    }