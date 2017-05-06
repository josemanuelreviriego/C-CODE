#include <stdlib.h>
#include <stdio.h>

typedef struct Nodo{

	int numero;
	Nodo *siguiente;

}Nodo;

Nodo *NuevoNodo (int n){

	Nodo *reservar = (Nodo *)malloc(sizeof(Nodo));
		reservar->numero = n;
		reservar->siguiente = NULL;

	return reservar;

}



void insertar(Nodo **lista,int n){

	Nodo *nuevo_nodo = NuevoNodo(n);

	Nodo *aux1 = *lista;
	Nodo *aux2;

	while((aux1 != NULL) && (aux1->numero < n)){

		aux2 = aux1;
		aux1 = aux1->siguiente;
		
	}

	if(*lista == aux1)
		*lista = nuevo_nodo;
	else
		aux2->siguiente = nuevo_nodo;

	nuevo_nodo->siguiente = aux1;

}

int main(){

	Nodo *lista = NULL;

	insertar(&lista,1);
	insertar(&lista,8);
	insertar(&lista,7);
	insertar(&lista,2);
	insertar(&lista,3);
	


	while(lista!=NULL){

		printf("%i - ",lista->numero);
		lista = lista->siguiente;
			


	}



	return EXIT_SUCCESS;
}



