#include <stdio.h>
#include <stdlib.h>

int main(){

    // Verde > if (1) else (0) else (0) 
    // Rojo > else (0) if (1) else (0)
    // Azul > else (0) else (0)
    // Cian > if (1) if (1) 
    // Magenta > else (0) if (1) if (1)
    // Amarillo > if (1) else (0) if (1)

    //LOS SIGUIENTES COLORES NO SE ENCUENTRAN DISPONIBLES EN EL CODIGO DEBIDO A QUE NO ESTOY SEGURO SI SON COLORES PRIMARIOS,EN CASO DE SERLOS SE REALIZARIA DE LA SIGUIENTE FORMA:

    //Posible Negro (Mezcla de todos los colores) if (1) (1) (1)
    //Posible Blanco (Ausencia de color) else (0) else (0) else(0)

    int verde;
    int rojo;
    int azul;

    printf("Hola Persona,Soy el Akinator de los colores básicos (Rojo,Verde,Azul) y puedo adivinar que color estas pensando siempre y cuando sea uno de los colores basicos o su mezcla :D\n");
    printf("Te voy a hacer un par de preguntas sobre tu color y me tendras que responder de la siguiente forma\n");
    printf("Si mi pregunta es correcta escribes el número 1, y si la respuesta es incorrecta escribes un 0;\n estoy en fase beta por lo que se gentil conmigo :D\n");
    printf("Piensa un color\n");
    
    printf("¿Tiene verde?\n");
    scanf(" %i",&verde);

    printf("¿Tiene rojo?\n");
    scanf(" %i",&rojo);

    printf("¿Tiene azul?\n");
    scanf(" %i",&azul);

   if (verde)
	if (azul)
	   printf("cian");  //cian > 11
	else 
	   if(rojo)
	     printf("Amarillo");  //amarillo > 101
	   else 
	     printf("Verde");   //verde > 100
   else 
	if(rojo)
	   if(azul)
	      printf("Magenta");  //magenta > 011
	   else 
	      printf("rojo");   //rojo > 010
	else 
	   printf("azul");   //azul > 00
	   

    return EXIT_SUCCESS;
}
