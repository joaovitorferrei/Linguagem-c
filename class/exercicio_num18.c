#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5
// Dadas duas listas de números, crie uma terceira lista que contenha a soma acumulada dos 
// elementos das duas listas. Ou seja, o primeiro elemento da terceira lista deve ser a soma dos 
// primeiros elementos das duas listas, o segundo elemento da terceira lista deve ser a soma dos 
// segundos elementos das duas listas, e assim por diante.
int main(void){
	float vet1[TAMANHO] ={5 ,5.6 ,8.6 , 2 , 7};
	float vet2[TAMANHO] ={5.9 , 8, 9.5, 3, 8};
	float vet3[TAMANHO];
	int i;
	for (i = 0; i < TAMANHO; i++) {
        printf("%.2f  ", vet1[i]);
    }
	printf("\n");
	for (i = 0; i < TAMANHO; i++) {
        printf("%.2f  ", vet2[i]);
    }
    printf("\n");
    printf("-----------------------------\n");
    for (i = 0; i < TAMANHO; i++) {
    	vet3[i] = vet1[i] + vet2[i];
        printf("%.2f|",vet3[i]);
    }
	printf("\n");
system("PAUSE");	
return 0;
}
