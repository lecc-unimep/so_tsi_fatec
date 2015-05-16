/**************************************************************************************
*** Programa que calcula o determinante de uma matriz, recebendo-a atraves de parametro
*** Código produzido por José Luís Zem
**************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {

        int matriz[20], indice=0, diagonais_principais=0, diagonais_secundarias=0, determinante=0;

        for (indice = 1; indice <= 9; indice++) {
            printf("Entre o %do. valor da matriz: ",indice);
			scanf("%d",&matriz[indice]);
        }
        diagonais_principais = (matriz[1]*matriz[5]*matriz[9]) + (matriz[2]*matriz[6]*matriz[7]) + (matriz[3]*matriz[4]*matriz[8]);
        diagonais_secundarias = - (matriz[3]*matriz[5]*matriz[7]) - (matriz[1]*matriz[6]*matriz[8]) - (matriz[2]*matriz[4]*matriz[9]);
        determinante = diagonais_principais + diagonais_secundarias;
        printf("O Determinante e = %d \n", determinante);
        return 0;
}
