#include <stdio.h>
#include <string.h>
void main(){
    char *cadena="hola mundo";
    int vocales = 0;
    for(int i=0; i<strlen(cadena); i++){
     switch (cadena[1]){
     case'a':
     //printf("%c es vocal\n")
     vocales++;
     break;
     case 'e':
     vocales++;
     break;
     default:

     vocales++;
     break;
    }
 }
 printf("la cadena %d tiene vocales\n", vocales);

 if (cadena[1]=='o'){
    printf("la %c es vocal", cadena[1]);
 }else{
    printf("no es vocal");
 }
 
}