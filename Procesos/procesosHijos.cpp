#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>


#define FIREFOX 0
#define GEDIT 	1


int total_hijos = 0;


void ejecutar_programa(int programa_hijo){

	switch(programa_hijo){

		case FIREFOX:
			execl("/usr/bin/firefox","firefox","www.google.es",NULL);
			break;

		case GEDIT:
			execl("/usr/bin/gedit","gedit","fernando",NULL);
			break;

		default:

			break;

	}

	fprintf(stderr,"No se ha podido ejecutar el hijo %i",total_hijos);

}


void spawn(int programa){

	int pid_hijo = fork();

	if(pid_hijo){
		total_hijos++;
		return;
	}

	ejecutar_programa(programa);

}


void muerteHijo(int signal){

	int muerte_natural;
	wait(&muerte_natural);
	total_hijos--;

}


int main(){

	struct sigaction sa;
		bzero(&sa,sizeof(sa));
	sa.sa_handler = &muerteHijo;

	sigaction(SIGCHLD,&sa,NULL);

	for(int i=0; i<2 ; i++)
		spawn(i);

	while(total_hijos){
		fprintf(stderr,"Tengo %i hijos activos\n",total_hijos);
		usleep(300000);
	}

	printf("Ya no tengo hijos, adios\n");

	return 0;


}
