#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    pid_t var;
    system("clear");
    printf("Processo-Pai: Iniciando Execucao.\n");
    while(1) {
        fork();
        printf("Processo-Filho: Iniciando Execucao.\n");
        sleep(1);
	printf("Processo-Filho: Encerrando Execucao.\n");    
    } 
    printf("Processo-Pai: Encerrando Execucao.\n");    
    return 0;
}
