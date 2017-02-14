#include <stdio.h>
#include <stdlib.h>

#define POS_AMIGOS  1
#define NO_AMIGOS 0
#define MAX 5000
#define INICIAL 2



bool comprobar (int a, int b,int c, int d){

	if (a == d && b == c)
		return POS_AMIGOS;
	else
		return NO_AMIGOS;

}

int pos_a(int primero,int divisor){

	int posible_amigo = 0;

		do{
			if((primero % divisor == 0))
				posible_amigo += divisor;


			divisor++;

		}while (divisor < primero);
		
		return posible_amigo;

}
int pos_b(int segundo, int divisor){

	int posible_amigo = 0;

		do{
			if((segundo % divisor == 0))
				posible_amigo += divisor;


			divisor++;

		}while (divisor < segundo);
		
		return posible_amigo;
}

int main(){
	
	int numero_a = INICIAL;
	int numero_b = INICIAL+1;
	int divisor = 1;

	int suma_resto_a;
	int suma_resto_b;

	do{
		int vueltas = 1;

		suma_resto_a = pos_a(numero_a,divisor);
		suma_resto_b = pos_b(numero_b,divisor);		

		
		if ( comprobar (suma_resto_a,suma_resto_b,numero_a,numero_b) == POS_AMIGOS )

			if(numero_a == numero_b)

				printf("%i es amigo de si mismo (Numero Perfecto) \n",numero_a);

			else
				
				printf("%i es amigo de %i\n",numero_a,numero_b);
	
		numero_a++;

		if(numero_a == MAX){
			numero_b++;
			numero_a = INICIAL + vueltas;
			vueltas++;
		}
		
	}while (numero_a <= MAX && numero_b <= MAX );

	return EXIT_SUCCESS;

}



