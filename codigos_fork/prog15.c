#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[]) {
    pid_t var;
    int estado;
    char mensagem[80]="#Processo Pai#";
    system("clear");
    printf("Processo-Pai: Iniciando Execucao.\n");
    printf("Processo-Pai: A mensagem é %s.\n", mensagem);
    var=fork();
    if ( var == 0 ) {
	printf("Processo-Filho 1: Iniciando Execucao.\n");
        printf("Processo-Filho 1: A mensagem é %s.\n", mensagem);
	sleep(5);
	strcpy(mensagem,"#Processo Filho#");
        printf("Processo-Filho 1: A mensagem é %s.\n", mensagem);
	printf("Processo-Filho 1: Encerrando Execucao.\n");
	exit(0);
    }
    waitpid(var,estado,0);
    printf("Processo-Pai: A mensagem é %s.\n", mensagem);
    printf("Processo-Pai: Encerrando Execucao.\n");
    return 0;
}