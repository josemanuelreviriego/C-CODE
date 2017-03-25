#include <stdio.h>
#include <stdlib.h>

#define MAX 10


void push(int pila[MAX],int *cima,int numero){

	pila[(*cima)++] = numero;
}

int pop(int pila[MAX],int *cima){

	return  pila[--(*cima)]; 



}




int main (){

	int pila[MAX];
	int cima = 0;



	push(pila,&cima,10);  // 0 PILA ---> CIMA 0 --> CIMA1
	push(pila,&cima,5);	// 1 PILA --> CIMA 1 --> CIMA 2

	printf("%i",pop(pila,&cima));







	return EXIT_SUCCESS;

}
