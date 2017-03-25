#include "estructura.h"
#include "dinamica.h"
#include "pila.h"

void temporadas_a_registrar(int *temp){

	do{

		printf("Temporadas a registrar ");
		scanf(" %i",temp);

	}while(*temp < 1 || *temp > 4 );

}

void genero_a_registrar(int *gen){

	do{

		printf("Genero \n"
			"1.-Accion\n"
			"2.-Romance\n"
			"3.-Comedia\n"
			"4.-Peleas\n");
		scanf(" %i",gen);

	}while(*gen <1 || *gen >4);

}

void preguntar(char *nom_serie){

	char respueta[8];

	printf("Nombre de la serie ");
	fgets(respueta,N,stdin);
/*
	do{

		printf("La serie introducida es %s \n"
			"¿Estas de acuerdo? (s/n)\n",nom_serie);
		respueta = getchar();

	}while(respueta != 's');
*/
}

int main(){
	
	int temporadas;
	int genero;
	char nom_serie[N];
	registro animes;

	temporadas_a_registrar(&temporadas);
	genero_a_registrar(&genero);
	preguntar(nom_serie);

	reservar_espacio(&animes,&temporadas);


	push(&animes,&genero);
	pop(&animes);






	liberar_espacio(&animes,&temporadas);

	return EXIT_SUCCESS;

}
