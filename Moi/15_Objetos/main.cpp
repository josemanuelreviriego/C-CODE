#include <stdlib.h>
#include <stdio.h>
#include "persona.h"

void imprime_edad_letra(Persona *persona){

				printf("Letra --> %c\n",persona->obtener_letra(persona));
				printf("Edad --> %i\n",persona->obtener_edad(persona));

}

int main(){

				Persona *fernando = nueva_persona(21,'f');
								fernando->poner_numero_favorito(fernando,5);

				Persona *xavier = nueva_persona(15);
								xavier->poner_letra(xavier,'x');
				
				imprime_edad_letra(fernando);
				imprime_edad_letra(xavier);

				printf("%i\n",fernando->numero_favorito);

				borrar_persona(fernando);

						fernando->letra = 'c';
						fernando->edad = 50;

				imprime_edad_letra(fernando);
							
				

				return EXIT_SUCCESS;
}


