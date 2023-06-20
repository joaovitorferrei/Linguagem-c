#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3
//Dada uma matriz quadrada de números, calcule a soma dos elementos da diagonal principal.
int main(void){
	float matriz[TAMANHO][TAMANHO] = {
		{3,5,6},
		{5.7,6.8,8.4},
		{8,6,9.8}
		};
	int i = 0, j = 0;
	float soma = 0;
	for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%.2f ", matriz[i][j]);
		}
		printf("\n");
	}
printf("--------------\n");
soma = (matriz[0][0] + matriz[1][1] + matriz[2][2]);
printf("Diagonal principal: [%.2f] [%.2f] [%.2f] = [%.2f]\n", matriz[0][0],matriz[1][1],matriz[2][2],soma);

	
system("PAUSE");
return 0;	
}

