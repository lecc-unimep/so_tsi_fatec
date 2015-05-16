/************************************************************************************** 
*** Programa que calcula o fatorial de um n�mero, recebendo-o atraves de um arquivo 
*** C�digo produzido por Alessandro Frasson
*** Altera��es promovidas por Jos� Lu�s Zem
**************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {

    int num=0, total=1, cont=0;
    FILE *arquivo;
  
    arquivo=fopen("arq.txt","r");
	if ( arquivo == NULL ) {
		printf("Nao foi possivel abrir o arquivo.\n");
		exit(0);
	} else {
        fscanf(arquivo,"%d",&num);
        fclose(arquivo);
        for (cont = num; num > 1; num--) {    
            total = total * (num);
        }
        printf("O Fatorial do numero digitado e = %d \n", total);
	}
	return 0;
}
