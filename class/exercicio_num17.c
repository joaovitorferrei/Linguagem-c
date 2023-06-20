#include <stdio.h>
#include <stdlib.h>
// Dada uma matriz de números, encontre o elemento máximo em cada linha e crie 
// um vetor com esses valores.
#define TAMANHO 4

int main(void) {
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int i, j;
    int maior[TAMANHO] = {0};
    int maior_t;

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);

            if (matriz[i][j] > maior[i]) {
                maior[i] = matriz[i][j];
            }
        }
        printf("\n");
    }
printf("-------------\n");
	for (i = 0; i < TAMANHO; i++) {
        printf("Linha %d: %d\n", i+1, maior[i]);
        if (maior[i] > maior_t){
            maior_t = maior[i];
        }
    }

    printf("Maior elemento de todos: %d\n", maior_t);

    system("PAUSE");
    return 0;
}

