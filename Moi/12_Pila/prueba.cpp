#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "notas.h"
//hacer una pila que empuje alumnos o lo que queramos.

#define MAX 20

struct TAlumno{

	char nombre[MAX];

};

struct TStack{

    struct TAlumno *reg[MAX];//HISTORIAL
    struct TAlumno *data[MAX];//PILA
    int cima;
    int historial;

};

void push(struct TStack *pila, struct TAlumno *al){

	strncpy(pila->data[(pila->cima)++]->nombre,al->nombre,MAX);	//nombre --> fernnado --> MAX

}

struct TAlumno *pop(struct TStack *pila){





}

int main(int argc, char *argv[]){

	struct TAlumno alumno;
		strncpy(alumno.nombre,"Fernando",MAX);
	
	struct TAlumno alumno2;
		strncpy(alumno2.nombre,"Alin",MAX);

	struct TStack pila;
		pila.cima = 0;

	pila.data[0] = (struct TAlumno *) malloc(sizeof (struct TAlumno));

	push(&pila,&alumno);
	pop(pila);



	return EXIT_SUCCESS;
}

