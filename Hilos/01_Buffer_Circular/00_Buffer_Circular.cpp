#include <stdlib.h>
#include <stdio.h>

#define MAX 3
#define ERROR_BUFFER false

typedef struct{

	char buffer[MAX];
	int cima;
	
}BufferCircular;

void imprime(BufferCircular *b){

	for(int i=0; i<MAX && (b->buffer[i] != ' '); i++)
		printf("%c cima es %i\n",b->buffer[i],b->cima);

	printf("\n");

}

bool push(BufferCircular *b,char dato){

	if(b->buffer[b->cima] == ' ' && b->cima < MAX)
		b->buffer[b->cima++] = dato;

	if(b->cima == MAX)
		b->cima = 0;

	imprime(b);

	return true;

}

char pop(BufferCircular *b){

	/* PENDIENTE */

	char devolver;

	if(b->cima <= 0 || b->cima > MAX)
		return ERROR_BUFFER;
	
	devolver = b->buffer[--b->cima];

	return devolver;

}



void rellenar(BufferCircular *b){
	
	b->cima = 0;

	for(int i=0; i<MAX; i++)
		b->buffer[i] = ' ';

}

int main(){

	BufferCircular buffer_ciruclar;
	rellenar(&buffer_ciruclar);
	
	push(&buffer_ciruclar,'a');
	push(&buffer_ciruclar,'b');
	push(&buffer_ciruclar,'c');
	char a = pop(&buffer_ciruclar);
	push(&buffer_ciruclar,'d');




	return EXIT_SUCCESS;
}

