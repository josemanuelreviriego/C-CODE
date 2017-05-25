#ifndef  __PERSONA__
#define  __PERSONA__

typedef struct Persona{

				int edad;
				char letra;
				int numero_favorito;
				//Get
				int (*obtener_edad)(Persona*);
				char (*obtener_letra)(Persona*);

				//Set
				void (*poner_numero_favorito)(Persona *,int);
				void (*poner_edad)(Persona*,int);
				void (*poner_letra)(Persona*,int);
				
}Persona;

//Metodos Getter
int obtener_edad(Persona *persona){return persona->edad;}
char obtener_letra(Persona *persona){return persona->letra;}
int numero_favorito(Persona *persona){return persona->numero_favorito;}

//Metodos Setter
void poner_numero_favorito(Persona *persona,int n){persona->numero_favorito = n;}
void poner_edad(Persona *persona,int n){persona->edad = n;}
void poner_letra(Persona *persona,int c){persona->letra = c;}


//Constructores

Persona *nueva_persona(int edad,char letra){

				Persona *reservar_memoria = (Persona *)malloc(sizeof(Persona));

								reservar_memoria->edad = edad;
								reservar_memoria->letra = letra;
								reservar_memoria->obtener_edad = obtener_edad;
								reservar_memoria->obtener_letra = obtener_letra;

								reservar_memoria->poner_numero_favorito = poner_numero_favorito;
								reservar_memoria->poner_edad = poner_edad;
								reservar_memoria->poner_letra = poner_letra;


				return reservar_memoria;

}

Persona *nueva_persona(int edad){

				Persona *reservar_memoria = (Persona *)malloc(sizeof(Persona));

								reservar_memoria->edad = edad;
								reservar_memoria->obtener_edad = obtener_edad;
								reservar_memoria->obtener_letra = obtener_letra;

								reservar_memoria->poner_numero_favorito = poner_numero_favorito;
								reservar_memoria->poner_edad = poner_edad;
								reservar_memoria->poner_letra = poner_letra;

				return reservar_memoria;
}


Persona borrar_persona(Persona *persona){free(persona);}


#endif
