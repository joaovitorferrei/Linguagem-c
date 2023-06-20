#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Dada uma matriz de números, crie um vetor com a soma dos elementos de cada linha  
// multiplicada pelo índice da linha. incompleto
#define TAMANHO 3
int main(void){
	int matriz[TAMANHO][TAMANHO];
	setlocale(LC_ALL,"Portuguese");
	int i,j;
	int soma[TAMANHO][TAMANHO];
	printf("Digite os os elementos da sua matriz %d x %d\n",TAMANHO,TAMANHO);
	for (i = 0; i < TAMANHO; i++){
		for (j = 0; j < TAMANHO; j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	for (i = 0; i < TAMANHO; i++){
		for (j = 0; j < TAMANHO; j++){
			soma[i][j] = i * matriz[i][j];
			printf("%d ",matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	    printf("Soma das linhas multiplicadas pelo índice da linha:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
	
	
system("PAUSE");
return 0;
}
