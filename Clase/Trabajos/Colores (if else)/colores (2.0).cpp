#include <stdio.h>
#include <stdlib.h>

int main(){

    // PRIMARIOS

    // Verde > if (1) else (0) else (0) 
    // Rojo > else (0) if (1) else (0)
    // Azul > else (0) else (0)

    //MEZCLA

    // Cian > if (1) if (1) else (0)
    // Magenta > else (0) if (1) if (1)
    // Amarillo > if (1) else (0) if (1)
    
    //OTROS

    // Negro if (1) if (1) if (1)
    // Blanco else (0) else (0) else (0)

    int verde;
    int rojo;
    int azul;

    printf("Hola Persona,Soy el Akinator de los colores básicos (Rojo,Verde,Azul) y puedo adivinar que color estas pensando siempre y cuando sea uno de los colores basicos o su mezcla :D\n");
    printf("Te voy a hacer un par de preguntas sobre tu color y me tendras que responder de la siguiente forma\n");
    printf("Si mi pregunta es correcta escribes el número 1, y si la respuesta es incorrecta escribes un 0 :D \n \n");
    printf("Piensa un color\n");
    
    printf("¿Tiene verde?\n");
    scanf(" %i",&verde);

    printf("¿Tiene rojo?\n");
    scanf(" %i",&rojo);

    printf("¿Tiene azul?\n");
    scanf(" %i",&azul);

  if (verde)
	if (azul)
		if(rojo)
		  printf ("Tu color es el Negro\n"); //negro > 111
		else 
		  printf ("Tu color es el cian\n"); //cian > 110
	else 
	        if(rojo)
	     	  printf("Tu color es el amarillo\n");  //amarillo > 101
	        else 
	          printf("Tu color es el verde\n");   //verde > 100
   else 
	if(rojo)
	   	if(azul)
	          printf("Tu color es el magenta\n");  //magenta > 011
	      	else 
	          printf("Tu color es el rojo\n");   //rojo > 010
	else 
		if (azul)
	 	  printf("Tu color es el azul\n");   //azul > 001
		else 
		  printf("Tu color es el blanco\n"); //blanco > 000
	   

    return EXIT_SUCCESS;
}
