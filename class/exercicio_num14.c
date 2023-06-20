#include <stdio.h>

#define TAMANHO_MATRIZ 3

void exibirMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ]) {
    int i, j;
    
    printf("Matriz:\n");
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        for (j = 0; j < TAMANHO_MATRIZ; j++) {
            printf("%d ", matriz[i][j]);
            matriz[i[1]]
        }
        printf("\n");
    }
}

int main(void) {
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    exibirMatriz(matriz);

    return 0;
}



