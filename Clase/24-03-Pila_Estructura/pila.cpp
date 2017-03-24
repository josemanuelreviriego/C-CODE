#include "estructuras.h"
#include "pila.h"

#define NOTAS 4

void decir_nota(){

	int pila_notas[4];
	int cima = 0;

	double nota;

	do{
		printf("Nota ");
		scanf(" %lf",&nota);

		push(&nota,pila_notas,&cima);
		pop(pila_notas,&cima);

	}while(cima < NOTAS);


}

int main (){

	DatosAlumno fernando;

		printf("Nombre ");
		fgets(fernando.nombre,MAX,stdin);
		
		printf("Dni ");
		fgets(fernando.dni,DNI,stdin);
		
		printf("Programacion ");
		scanf(" %lf",&fernando.notas_troncales.programacion);

		printf("Bases ");
		scanf(" %lf",&fernando.notas_troncales.bases);

		printf("Programacion ");
		scanf(" %lf",&fernando.notas_secundarias.lenguaje);

		printf("Programacion ");
		scanf(" %lf",&fernando.notas_secundarias.lenguaje);
	
	decir_nota();

	return EXIT_SUCCESS;

}
