#include <stdio.h>
#include <stdlib.h>
//Dada uma matriz de números, calcule a média dos elementos de cada linha e armazene 
//os resultados em um vetor.
#define TAMANHO 3

int main(void) {
    float matriz[TAMANHO][TAMANHO] = {
        {5 , 6, 5.6},
        {8.5,5.5, 7},
        {8, 5.9,3.9}
    };
    
    int i, j;
    float soma, media[TAMANHO];
    
    for (i = 0; i < TAMANHO; i++) {
        soma = 0; // Inicializa a variável soma para cada linha
        for (j = 0; j < TAMANHO; j++) {
            soma += matriz[i][j];
            printf("%.2f ", matriz[i][j]);
        }
        media[i] = soma/ TAMANHO;
        printf("Media da linha %d: %.2f\n", i+1, media[i]);
        
    }
    printf("Media: [%.2f] [%.2f] [%.2f] \n",media[0],media[1],media[2]);
    system("PAUSE");
    return 0;
}

