#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    system("clear");
    printf("Processo-Pai: Iniciando Execucao.\n");
    fork();
    fork();
    printf("Processo-Filho: Iniciando Execucao.\n");
    sleep(10);
    printf("Processo-Filho: Encerrando Execucao.\n");
    printf("Processo-Pai: Encerrando Execucao.\n");
    return 0;
}