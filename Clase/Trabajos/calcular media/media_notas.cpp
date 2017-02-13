#include <stdio.h>
#include <stdlib.h>

int main(){

      //8 asginaturas, 2 convalidadas

      float programacion;
      float marcas;
      float datos;
      float sistemas;
      float ingles;
      float entornos;
      float fol;
      float empresa;
      float media;

      fol = 5;
      empresa = 7;

	printf("introduce tu nota de programación ");
	scanf(" %f",&programacion);

	printf("introduce tu nota de marcas ");
	scanf(" %f",&marcas);

	printf("introduce tu nota de datos ");
	scanf(" %f",&datos);

	printf("introduce tu nota de sistemas ");
	scanf(" %f",&sistemas);

	printf("introduce tu nota de ingles ");
	scanf(" %f",&ingles);

	printf("introduce tu nota de entornos ");
	scanf(" %f",&entornos);

	printf("Tu nota de fol es %f\n",fol);

	printf("Tu nota de empresa es %f\n",empresa);


	media =(programacion + marcas + datos + sistemas + ingles + entornos + fol + empresa) / 8;
	
	printf("Tu media es %f\n",media);





   

    return EXIT_SUCCESS;
}
