#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calif() {
    return 5 + rand() % 6; 
}

void mejorpeoralumn(const char* matriz[4][4], int calificaciones[4][4]) {
    int mejorPromedio = 0, peorPromedio = 100; 
    int mejorAlumno = -1, peorAlumno = -1;     

    for (int i = 1; i < 4; i++) { 
        int suma = 0;
        for (int j = 1; j < 4; j++) { 
            suma += calificaciones[i][j];
        }
        int promedio = suma / 3; 

        if (promedio > mejorPromedio) {
            mejorPromedio = promedio;
            mejorAlumno = i;
        }


        if (promedio < peorPromedio) {
            peorPromedio = promedio;
            peorAlumno = i;
        }
    }

    printf("\nEl mejor alumno es: %s con un promedio de %d\n", matriz[mejorAlumno][0], mejorPromedio);
    printf("El peor alumno es: %s con un promedio de %d\n", matriz[peorAlumno][0], peorPromedio);
}

void Matriz(const char* matriz[4][4], int calificaciones[4][4]) {
    matriz[0][0] = "Alumnos";
    matriz[0][1] = "Matemáticas";
    matriz[0][2] = "Inglés";
    matriz[0][3] = "Historia";

    matriz[1][0] = "Tilin";
    matriz[2][0] = "Alan";
    matriz[3][0] = "Tilina";

    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            calificaciones[i][j] = calif();
        }
    }
}

int main() {
    const char* matriz[4][4];
    int calificaciones[4][4] = {0};
    srand(time(NULL));

    Matriz(matriz, calificaciones);

    
    printf("Matriz de calificaciones:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == 0 || j == 0) {
                
                printf("%-12s ", matriz[i][j] ? matriz[i][j] : " ");
            } else {
            
                printf("%-12d ", calificaciones[i][j]);
            }
        }
        printf("\n");
    }

    mejorpeoralumn(matriz, calificaciones);

    return 0;
}
