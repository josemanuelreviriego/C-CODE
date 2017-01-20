#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 7
#define N 50

#define ANIME 1
#define GENERO 2
#define MASCULINOS 3
#define FEMENINOS 4

#define CANTIDAD(x) (sizeof( (x) ) / sizeof (char *)-1)

int tematica;
int aleatorio;
const char *elegida; //pondremos la palabra de arriba de forma ALEATORIOA
char adivina[N]; //pondremos los _ _ _ _ 	


const char *nombres_anime[]={	"konosubarashi",
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
//MENU

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
}

//NUMERO ALEATORIO

long int random(){

	if(tematica==ANIME){

		srandom(time(NULL));
		aleatorio = rand() % CANTIDAD(nombres_anime);
	
		return aleatorio;
	}

	if(tematica==GENERO){

		srandom(time(NULL));
		aleatorio = rand() % CANTIDAD(genero);

		return aleatorio;
	}

	if(tematica==MASCULINOS){

		srandom(time(NULL));
		aleatorio = rand() % CANTIDAD(personajesm);
	
		return aleatorio;
	}

	if(tematica==FEMENINOS){

		srandom(time(NULL));
		aleatorio = rand() % CANTIDAD(personajesf);
	
		return aleatorio;
	}
}

//ELEGIDA = PALABRA_TEMATICA

void eleccion(void){

	bzero(adivina,MAX);

	if(tematica==ANIME){
		elegida=nombres_anime[aleatorio];
		system("clear");
		printf("\n\n\n\t\t\tTematica: NOMBRES DE ANIME\n\n\n");
	}
	if(tematica==GENERO){
		elegida=genero[aleatorio];
		system("clear");
		printf("\n\n\n\t\t\tTematica: GENEROS DE ANIME\n\n\n");
	}
	
	if(tematica==MASCULINOS){
		elegida=personajesm[aleatorio];
		system("clear");
		printf("\n\n\n\t\t\tTematica: PERSONAJES MASCULINOS DE ANIME\n\n\n");
	}
	
	if(tematica==FEMENINOS){
		elegida=personajesf[aleatorio];
		system("clear");
		printf("\n\n\n\t\t\tTematica: PERSONAJES FEMENINOS DE ANIME\n\n\n");
	}

}	
//PALABRA OCULTA IMPRESA _ _ _

void palabraoculta(void){

		printf("\t\t\t");

		for(int i=0; i<(int)strlen(elegida);i++){
			adivina[i]='_';
			printf("%c ",adivina[i]);		
		}
		printf("\n\n\n");
}

int main(int argc, char *argv[]){

	char letra[1];//letra del USUARIO
	int vidas =6;
	int victoria=0;

//menu (línea 62)

	opciones();

//elegida = palabra_tematica (linea 119)
	
	eleccion();

// palabra que se imprime _ _ _ _ (línea 147)

	palabraoculta();
	
	// pedir letra

	do{
		printf("\t\t\t\t\tTienes %i vidas,letra introducida:%c\n\n\n",vidas,letra[0]);

		printf("Letra ");
		scanf(" %c",letra);

		printf("\t\t\t");

			for(int i=0; i<(int)strlen(elegida);i++){
				if(elegida[i]==letra[0]){
					adivina[i]=letra[0];	
					victoria+=1;
				}

				printf("%c ",adivina[i]);	


			}
	
		if(victoria==(int)strlen(elegida)){
			system("clear");
			printf("\n\n\n\t\t\tHAS GANADO\n");
			return EXIT_SUCCESS;
		}
		printf("\n\n\n");


	}while(vidas>0);

	return EXIT_SUCCESS;
}









