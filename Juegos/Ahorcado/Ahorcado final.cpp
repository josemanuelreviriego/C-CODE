#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MAX 7
#define N 50

#define ANIME 1
#define GENERO 2
#define MASCULINOS 3
#define FEMENINOS 4

#define CANTIDAD(x) (sizeof( (x) ) / sizeof (char *)-1)

int tematica;
int dibujo=0;
const char *elegida;
char adivina[N];


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
	"romance",
	"fantasia",
	"shonen",
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

void opciones(){

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

int aleatorio;

	if(tematica==ANIME){

		srandom(time(NULL));
		aleatorio= rand() % CANTIDAD(nombres_anime);
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

void eleccion(){

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

void palabraoculta(){

		printf("\t\t\t");

		for(int i=0; i<(int)strlen(elegida);i++){
			adivina[i]='_';
			printf("%c ",adivina[i]);		
		}

		printf("\n\n\n");
}

//DIBUJO CADA VEZ QUE SE FALLA

void dibujo_muerte(){

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

//COMPRAR PALABRA SELECCIONADA CON OCULTA 

bool distinta(const char*pal_secreta,const char *pal_seleccionada){

	return !!strcmp(pal_secreta,pal_seleccionada);
}

//GANAR O PERDER

void victoria_derrota(){


	if(distinta(elegida,adivina)){
		
	system("clear");
	printf("\n\n\n\t\tHAS PERDIDO\t\t\t\tX.X\n\n\n");
	}

	else{

	system("clear");
	printf("\n\n\n\t\tHAS GANADO\t\t\t\t\n\n\n");
	}
}
//PRINCIPAL

int main(int argc, char *argv[]){

	int vidas=6;
	int victoria=0;

//menu (línea 62)

	opciones();

//elegida = palabra_tematica (linea 120)
	
	eleccion();

//palabra que se imprime _ _ _ (línea 158)

	palabraoculta();
	
	// pedir letra,sustituirla y restar vidas

	do{

		char letra;
		int derrota = 0;

		printf("\t\t\tTienes %i vidas,letra introducida:%c\n\n\n",vidas,letra);

			printf("Letra ");
			scanf(" %c",&letra);

			printf("\t\t\t");

			for(int i=0; i<(int)strlen(elegida); i++){

				if(elegida[i]==letra){

					adivina[i]=letra;
					derrota=1;
				
				}

				printf("%c ",adivina[i]);
				}
			
			if(derrota==0){

				vidas--;
				dibujo++;
			}

		dibujo_muerte();
	
			printf("\n\n\n");
			
	}while(distinta(elegida,adivina) && vidas);

	//victoria o derrota 

	victoria_derrota();

	return EXIT_SUCCESS;
}
