#include <stdlib.h>
#include <stdio.h>

typedef struct Nodo{

	int numero;
	Nodo *siguiente;
	
}Nodo;

bool cola_vacia(Nodo *inicio){return !inicio;};

void insertar(Nodo *&inicio,Nodo *&fin,int n){

	Nodo *nuevo_nodo = (Nodo *)malloc(sizeof(Nodo));
		nuevo_nodo->numero = n;
		nuevo_nodo->siguiente = NULL;

	if(cola_vacia(inicio))
		inicio = nuevo_nodo;

	else
		fin->siguiente = nuevo_nodo;


	fin = nuevo_nodo;

}

void eliminar(Nodo *&inicio,Nodo *&fin){

	Nodo *eliminar_memoria = inicio;

	if(inicio == fin){

		inicio = NULL;
		fin = NULL;

	}else
		inicio = inicio->siguiente;


	free(eliminar_memoria);

}



int main(){

	Nodo *inicio = NULL;
	Nodo *fin = NULL;

	insertar(inicio,fin,5);
	insertar(inicio,fin,6);
	insertar(inicio,fin,7);

	eliminar(inicio,fin);

	while(inicio!=NULL){

		printf("%i ",inicio->numero);
		inicio = inicio->siguiente;



	}

	return EXIT_SUCCESS;
}

