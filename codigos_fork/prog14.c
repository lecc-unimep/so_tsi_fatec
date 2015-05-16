#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    pid_t var1, var2;
    int estado;
    system("clear");
    printf("Processo-Pai: Iniciando Execucao.\n");
    var1=fork();
    if ( var1 == 0 ) {
	    printf("Processo-Filho 1: Iniciando Execucao.\n");
	    sleep(10);
	    printf("Processo-Filho 1: Encerrando Execucao.\n");
	    exit(0);
    }
    var2=fork();
    if ( var2 == 0 ) {
	    printf("Processo-Filho 2: Iniciando Execucao.\n");
	    sleep(10);
	    printf("Processo-Filho 2: Encerrando Execucao.\n");
	    exit(0);
    }
    waitpid(var1,estado,0);
    waitpid(var2,estado,0);
    printf("Processo-Pai: Encerrando Execucao.\n");
    return 0;
}