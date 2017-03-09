#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void push(int *numero,int pila[MAX],int *cima){

	pila[*cima++] = *numero;

}

int pop(int pila[MAX],int *cima){

	return pila[--(*cima)];

}

int main (){

	int pila[MAX];
	int cima = 0;
	int numero;
	int vueltas = MAX;

	do{

	scanf(" %i",&numero);

	push(&numero,pila,&cima);
	numero = pop(pila,&cima);

	vueltas--;

	}while(vueltas);

	for(int i=0; i<MAX; i++){
		printf("%3i",pila[i]);
	
	
	}

	return EXIT_SUCCESS;

}
