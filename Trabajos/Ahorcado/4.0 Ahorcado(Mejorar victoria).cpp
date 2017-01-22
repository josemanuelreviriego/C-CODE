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
int dibujo=0;
const char *elegida; //pondremos la palabra de arriba de forma ALEATORIOA
char adivina[N]; //pondremos los _ _ _ _ 	


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

//NUMERO aleatorio

long int random(){

int aleatorio;

	if(tematica==ANIME){

		srandom(time(NULL));
		aleatorio= rand() % CANTIDAD(nombres_anime);
		return aleatorio;	
	}

	if(tematica==GENERO){

		srandom(time(NULL));
		aleatorio = rand() % CANTIDAD(genero);
	}

	if(tematica==MASCULINOS){

		srandom(time(NULL));
		aleatorio = rand() % CANTIDAD(personajesm);

	}

	if(tematica==FEMENINOS){

		srandom(time(NULL));
		aleatorio = rand() % CANTIDAD(personajesf);
	
	}
}

//ELEGIDA = PALABRA_TEMATICA

void eleccion(void){


	bzero(adivina,MAX);

	if(tematica==ANIME){
		elegida=nombres_anime[random()];
		system("clear");
		printf("\n\n\n\t\t\tTematica: NOMBRES DE ANIME\n\n\n");
	}
	if(tematica==GENERO){
		elegida=genero[random()];
		system("clear");
		printf("\n\n\n\t\t\tTematica: GENEROS DE ANIME\n\n\n");
	}
	
	if(tematica==MASCULINOS){
		elegida=personajesm[random()];
		system("clear");
		printf("\n\n\n\t\t\tTematica: PERSONAJES MASCULINOS DE ANIME\n\n\n");
	}
	
	if(tematica==FEMENINOS){
		elegida=personajesf[random()];
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

void muerte(void){

	if(dibujo==1)
		printf("\t\t\t\to");
	if(dibujo==2)
		printf("\t\t\t\to.");
	if(dibujo==3)
		printf("\t\t\t\to.o");
	if(dibujo==4)
		printf("\t\t\t\tO.o");
	if(dibujo==5)
		printf("\t\t\t\tO.O");
}

int main(int argc, char *argv[]){

	char letra;//letra del USUARIO
	int vidas=6;
	int victoria=0;
//menu (línea 62)

	opciones();

//elegida = palabra_tematica (linea 119)
	
	eleccion();

//palabra que se imprime _ _ _ _ (línea 147)

	palabraoculta();
	
	// pedir letra ;elegida tiene la palbra

	do{
		printf("\t\t\tTienes %i vidas,letra introducida:%c\n\n\n",vidas,letra);

		int derrota=0;

		printf("Letra ");
		scanf(" %c",&letra);

		printf("\t\t\t");

			for(int i=0; i<(int)strlen(elegida);i++){
				if(elegida[i]==letra){
					adivina[i]=letra;
					victoria+=1;
					derrota=1;
				
				}

				printf("%c ",adivina[i]);
			}
			
			if(derrota==0){
				vidas--;
				dibujo++;
			}	

			muerte();
	

			if(victoria==(int)strlen(elegida)){
				system("clear");
				printf("\n\n\n\t\t\tHAS GANADO\n");
				return EXIT_SUCCESS;
			}
		printf("\n\n\n");

	}while(vidas>0);

	system("clear");
	printf("\n\n\n\t\tHAS PERDIDO\t\t\t\tX.X\n\n\n");
	return EXIT_SUCCESS;
}





