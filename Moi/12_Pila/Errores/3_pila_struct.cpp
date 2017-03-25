#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define MAX 30
#define DNI 10

struct TAlumno{

	char nombre[MAX];
	char dni[DNI];

};


struct TStack{

	struct TAlumno *reg[MAX];  //HISTORIAL
	struct TAlumno *data[MAX]; //PILA
	int cima; 		   //CIMA

};

void push(struct TStack *pila,struct TAlumno * al){

	strncpy(pila -> data[pila->cima++] -> nombre,al->nombre,MAX);

}
struct TAlumno *pop(struct TStack *pila){



}


int main (){

	struct TAlumno *alumno;
	struct TStack *pila;

	strncpy(alumno->nombre,"Fernando",MAX);
/*
	pila->cima = 5;

	alumno = (struct TAlumno *)malloc(sizeof(struct TAlumno));

	pila->data[0] = alumno;


	push(pila,alumno);

*/


	return EXIT_SUCCESS;

}
