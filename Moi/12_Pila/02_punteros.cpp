#include <stdlib.h>
#include <stdio.h>

typedef struct Pila{

		int numero;
		Pila *siguiente;

}Pila;

Pila *NuevoNodo(int n){

		Pila *reservar = (Pila *)malloc(sizeof(Pila));
			reservar->numero = n;
			reservar->siguiente = NULL;

		return reservar;

}

void push(Pila *&nodo,int n){
		
		Pila *nuevo_nodo = NuevoNodo(n);
			  nuevo_nodo->siguiente = nodo;
			  nodo = nuevo_nodo;
			  
}

int main(){

		Pila *nodos = NULL;

		push(nodos,1);
		push(nodos,2);
		push(nodos,3);
		push(nodos,4);

		while(nodos!=NULL){

				printf("%i",nodos->numero);
				nodos = nodos->siguiente;

		}

		printf("\n%i",nodos[0].numero);
				


			
		


		return EXIT_SUCCESS;

}

