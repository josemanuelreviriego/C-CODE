#include "estructuras.h"

void push(double nota_asignatura,int pila_notas[NOTAS],int *cima){
      
        pila_notas[(*cima)++] = nota_asignatura;
	printf("%lf",nota_asignatura);

}

int pop(int *pila_notas,int *cima){

        return --(*cima);

}

