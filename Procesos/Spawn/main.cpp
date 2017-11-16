#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>


#define N	0x100
#define M	0x10
#define PROMPT	"MA-TEOS$> "


#define FALLO_EJECUCION "No he podido ejecutar: %s\n",argv[0]


void spawn(char buffer[]){

	char *argv[M];
	int i = 0;
	pid_t miHijo = 0;

	/* strtok "trocea" las palabras, ejemplo del dibujo */

	while(argv[i++] = strtok(buffer, " "))
		buffer = NULL;

		strtok (argv[i-2],"\n");
		
	if ( miHijo = fork() )
		return;

	//execl("/usr/bin/firefox","firefox","index.html",NULL);
	//execv("/usr/bin/firefox",["firefox","index.html",NULL]); en c no se puede, en javascipt si!!!
	execvp(argv[0],argv);
	fprintf(stderr,FALLO_EJECUCION);
	exit(1);

}


int main(int argc, char *argv[]){

	char buffer[N];

	do{

		printf	(PROMPT);
		fgets	(buffer, N, stdin);
		spawn	(buffer);

	}while(true);

	return EXIT_SUCCESS;

}
