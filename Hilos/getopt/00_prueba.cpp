#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

void imprime_uso(FILE *stream,int salida){

	fprintf(stream,
			"   -h --help 	Más información sobre el programa.\n"
			"   -u --user 	Muestra tu usuario.\n"
			"   -e --edad 	Muestra tu edad.\n"
			);
	exit(salida);

}

int main(int argc, char *argv[]){

	int opcion;

	char usuario[20] = "FSilva";
	int edad 	 = 21;
	
	const char* opciones_cortas = "hue";
	const struct option opciones_largas[] ={
		{"help",	0,NULL,	'h'},
		{"user",	0,NULL,	'u'},
		{"edad",	0,NULL,	'e'},
		{NULL,		0,NULL,	 0 },
	};

	do{

		switch(opcion = getopt_long(argc,argv,opciones_cortas,opciones_largas,NULL)){

			case 'h':
				imprime_uso(stdout,EXIT_SUCCESS);
				break;

			case 'u':
				printf("USUARIO => %s \n",usuario);			
				break;
		
			case 'e':
				printf("EDAD => %i \n",edad);			
				break;
		
			case -1:
				break;

			default:
				printf("fallo escribe -h / --help despues del nombre del programa");
				
		}

	}while(opcion != -1);

	return EXIT_SUCCESS;
}
