#include <stdlib.h>
#include <stdio.h>

typedef struct Nodo{

	int numeros;
	Nodo *siguiente;

}Nodo;

Nodo *ReservarMemoria(int n){

	Nodo *reservado = (Nodo*)malloc(sizeof(Nodo));
	reservado->numeros = n;
	reservado->siguiente = NULL;

	return reservado;

}

void nueva_cabeza(Nodo **lista,int n){

	Nodo *cuerpo;
		cuerpo = *lista;
		*lista = ReservarMemoria(n);
		(*lista)->siguiente = cuerpo;

}

int main(){

	Nodo *lista;
		lista = ReservarMemoria(0);


	for(int i=1; i<10; i++)
		nueva_cabeza(&lista,i);

	while(lista!=NULL){

		printf("%i   ",lista->numeros);
		lista = lista->siguiente;

	}



	

		

	


        return EXIT_SUCCESS;

}

