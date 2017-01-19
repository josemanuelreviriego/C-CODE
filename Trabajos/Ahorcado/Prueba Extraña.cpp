#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 7
#define N 50
#define CANTIDAD(x) (sizeof( (x) ) / sizeof (char *)-1)

int tematica;

const char *nombres_anime[]={
	"konosubarashi",
	"dragonball",	
	"onepiece",
	"rezero",
	"another",
	"bigorder",
	NULL
	};

const char *genero[]={
	"aventura",
	"drama",	
	"comedia",
	"echii",
	"harem",
	"yaoi",
	NULL
	};


const char *personajesm[]={
	"kirito",
	"goku",	
	"vegeta",
	"zoro",
	"luffy",
	"saitama",
	NULL
	};


const char *personajesf[]={
	"hestiasama",
	"bulma",	
	"aquasama",
	"megumin",
	"charlotte",
	"gearchan",
	NULL
	};
//OPCIONES PARA EL USUARIO

int opciones(){



	system("clear");

	do{

	printf("SELECCIONA LA TEMÁTICA\n"
			"1.-Nombres de Anime\n"
			"2.-Genero de Anime\n"
			"3.-Personajes de Anime(Masculinos)\n"
			"4.-Personajes de Anime(Femeninos)\n"
			);

	scanf(" %i",&tematica);	
	
	}while(tematica < 1 || tematica > 4);

	return tematica;
}

//GENERAR UN NUMERO ALEATORIO

long int random(){

int aleatorio;

	srandom(time(NULL));
	aleatorio = rand() % CANTIDAD(MAX);
	
	return aleatorio;
}

//SELECCIONAMOS LA TEMATICA DEL USUARIO
/*
char usuario (){

char *eleccion;

	if(tematica==1){
		for(int i=0; i<MAX; i++){
			eleccion[i] = nombres_anime[i];
		}
	}

		
	if(tematica==2){
		for(int i=0; i<MAX; i++){
			eleccion[i] = genero[i];
		}
	}

	if(tematica==3){
		for(int i=0; i<MAX; i++){
			eleccion[i] = personajesm[i];
		}
	}
	
	if(tematica==4){
		for(int i=0; i<MAX; i++){
			eleccion[i] = personajesf[i];
		}
	}

	
	return eleccion;

}

*/


//PRINCIPAL


int main(int argc, char *argv[]){

int menu = opciones();
int azar = random();

const char *elegida;
char adivina[MAX];	

char buffer[N]={"memset"};
char *palabra[MAX];
int i=0;


	memset(buffer,'\0',N);



	for(int i=0; i<MAX; i++){

		strcpy(buffer,nombres_anime[i]);

		palabra[i]=(char *)malloc(strlen(buffer)+1);


		strcpy(palabra[i],buffer);





		strcpy(buffer,nombres_anime[i]);


		printf("%s",buffer);


	


	}



	return EXIT_SUCCESS;
}









