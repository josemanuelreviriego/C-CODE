#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define MAX 20
#define DNI 9

typedef struct{

        double programacion; //lista
        double bases;           //lista

}AsignaturasPrincipales;


typedef struct{

        double lenguaje; //lista
        double entornos; //lista 

}AsignaturasSecundarias;

typedef struct{

        char nombre[MAX]; //fernando
        char dni[DNI];    //Dni
        AsignaturasPrincipales notas_troncales;
        AsignaturasSecundarias notas_secundarias;

}DatosAlumno;
