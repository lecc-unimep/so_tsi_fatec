/************************************************************************************** 
*** Programa que calcula o fatorial de um n�mero, recebendo-o atraves do teclado 
*** C�digo produzido por Alessandro Frasson
*** Altera��es promovidas por Jos� Lu�s Zem
**************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc,char *argv[]) {

    int num=0, total=1, cont=0;
	
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);
     
    for (cont = num; num > 1; num--) {    
         total = total * (num);
    }
	
    printf("O Fatorial do numero digitado e = %d \n", total);
}
