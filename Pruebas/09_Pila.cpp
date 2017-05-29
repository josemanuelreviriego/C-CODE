#include <stdlib.h>
#include <stdio.h>

#define MAX 1000

typedef struct Naves{

	int x;
	int y;
	bool vida;

}Naves;

typedef struct Pila{

	Naves *naves[MAX];
	int cima;

}Pila;

void push(Pila *pila,Naves *dato){

	pila->naves[pila->cima] = dato;
	pila->cima++;
	
}

Naves *NuevaNave(){

	Naves *memoria = (Naves*)malloc(sizeof(Naves));
		
			memoria->x = 50;
			memoria->y = 50;
			memoria->vida = true;

	return memoria;
}

int main(){

	Pila naves;

	push(&naves,NuevaNave());

	return EXIT_SUCCESS;

}

