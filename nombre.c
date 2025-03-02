#include <stdio.h>

//Prototipo/firma de una función
void Nombre();
void A_Paterno();
void A_Materno();

void main(){  //Esto es conocido como el programa mínimo, es la parte principal. 
    Nombre();
    A_Paterno();
    A_Materno();
}

void Nombre(){
        printf ("Brayan Alan\n");
}

void A_Paterno(){
        printf ("Hernandez\n");
}
    
void A_Materno(){
        printf ("de jesus\n");
}