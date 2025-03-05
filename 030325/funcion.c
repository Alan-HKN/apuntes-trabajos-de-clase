#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funcion que genera una calificacion aleatoria entre 5.0 y 10.0
int generarcalificacion(){
    return 5.0 + (rand() %51) / 10.0; //genera valores en el rango[5.0, 10.0]
}

void main(){
    //inicializar la semilla aleatoria solo una vez en el programa
    srand(time(NULL));

    //ejemplo: generar y mostrar 10 calificaciones aleatorias
    printf("calificaciones aleatorias\n");
    for(int i=0; i<10; i++) {
        printf("%.d\n", generarcalificacion());
    }
}