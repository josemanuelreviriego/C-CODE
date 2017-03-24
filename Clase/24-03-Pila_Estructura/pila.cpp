#include "estructuras.h"
#include "pila.h"

void decir_nota(DatosAlumno *alumno){

	int pila_notas[4];
	bzero(pila_notas,sizeof(int));
	int cima = 0;
	int respuesta;

	do{

		printf("1.-Meter nota\n" 
		       "2.-Ver ultima nota\n\n");
		scanf(" %i",&respuesta);

		if(respuesta == 1)
			push(alumno->notas_secundarias.lenguaje,pila_notas,&cima); //BUSCAR FORMA DE QUE SE ACTUALICE LA SIGUIENTE NOTA SOLA

		if(respuesta == 2 && pila_notas[0] >0){

			system("clear");
			printf("La ultima nota en la pila fue %i",pop(pila_notas,&cima));

		}

		if(respuesta == 2 && pila_notas[cima] == 0)
			printf("No hay notas en la pila");

		printf("\n");

	}while(cima < NOTAS);

}

int main (){

	DatosAlumno fernando;

		printf("Nombre ");
		fgets(fernando.nombre,MAX,stdin);
		
		printf("Dni ");
		fgets(fernando.dni,DNI,stdin);
		
		printf("lenguaje ");
		scanf(" %lf",&fernando.notas_secundarias.lenguaje);

		printf("Entornos ");
		scanf(" %lf",&fernando.notas_secundarias.entornos);

		printf("programacion ");
		scanf(" %lf",&fernando.notas_principales.programacion);

		printf("Bases ");
		scanf(" %lf",&fernando.notas_principales.bases);
	
	decir_nota(&fernando);

	return EXIT_SUCCESS;

}
