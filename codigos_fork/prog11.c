#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    pid_t var;
    system("clear");
    printf("Processo-Pai: Iniciando Execucao.\n");
    var=fork();
    if ( var == 0 ) {
        printf("Processo-Filho: Iniciando Execucao.\n");
	printf("Processo-Filho: A variavel VAR tem o seguinte conteudo: %d \n", var);
	printf("Processo-Filho: Meu PID e %d \n", getpid());
        sleep(5);
	printf("Processo-Filho: Encerrando Execucao.\n");
	exit(0);
    }
    printf("Processo-Pai: A variavel VAR tem o seguinte conteudo: %d \n", var);
    printf("Processo-Pai: Meu PID e %d \n", getpid());
    sleep(10);
    printf("Processo-Pai: Encerrando Execucao.\n");    
    return 0;
}
