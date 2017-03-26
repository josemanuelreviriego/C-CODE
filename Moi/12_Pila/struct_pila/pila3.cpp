#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define MAX 20
#define N 10

typedef struct NotasAlumno{

	double programacion;
	double bases;
	double lenguaje;
	double entornos;

}NotasAlumno;

typedef struct{

	NotasAlumno *historial[N];
	NotasAlumno *data[N];
	int cima;

}PilaDatos;

void reservar_espacio(PilaDatos *datos){

	NotasAlumno *reservar;

	for(int i=0;i<N;i++)
		datos->data[i]= (NotasAlumno *)malloc(sizeof(NotasAlumno));

}

void push(PilaDatos *datos,double nota){

	datos->data[datos->cima++]->programacion = nota;

}

double pop(PilaDatos *datos){

	return datos->data[--(datos->cima)]->programacion;
}

void liberar_espacio(PilaDatos *datos){

	for(int i=0;i<N;i++)
		free(datos->data[i]);

}

int main(){

	PilaDatos pila;
	pila.cima = 0;
		reservar_espacio(&pila);

		push(&pila,5);
		push(&pila,7);
		push(&pila,7);
		push(&pila,8);

		liberar_espacio(&pila);

	

	return EXIT_SUCCESS;

}
