#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5
//Dada uma matriz de números, calcule a soma dos elementos de cada coluna e armazene 
//os resultados em uma lista.

void percorendo_vetor(float matriz[TAMANHO][TAMANHO]) {
    int i, j;
    float soma[TAMANHO] = {0}; // Vetor para armazenar as somas das colunas

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%.2f ", matriz[i][j]);
            soma[j] += matriz[i][j]; // Adiciona o elemento à soma da coluna j
        }
        printf("\n");
    }

    printf("Somas das colunas:\n");
    for (j = 0; j < TAMANHO; j++) {
        printf("Coluna %d: %.2f\n", j+1, soma[j]);
    }
    float soma_total = 0; // Variável para armazenar a soma de todas as colunas
    for (j = 0; j < TAMANHO; j++) {
        soma_total += soma[j]; // Adiciona a soma da coluna j à soma total
    }
    printf("Soma total de todas as colunas: %.2f\n", soma_total);
}

int main() {
    float matriz5x5[5][5] = {
        {1.55, 2, 3, 4, 5.9},
        {6.12, 7, 8.7, 9, 10},
        {11, 12.2, 13, 14, 15.6},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    percorendo_vetor(matriz5x5);

    system("PAUSE");
    return 0;
}

