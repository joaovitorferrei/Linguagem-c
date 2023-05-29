/* Faça um programa que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
resultante. */

#include <stdio.h>
#include<stdlib.h>
int main(){

    int a[10], b[10], c[10], i;
   for (i = 0; i<10; i++) {
        printf("Insira o %d elemento do vetor 1: ", (i+1));
        scanf("%d", &a[i]);
    }
   for (i = 0; i<10; i++) {
        printf("Insira o %do elemento do vetor 2: ", (i+1));
        scanf("%d", &b[i]);
    }
   for (i = 0; i<10; i++) {
        c[i] = a[i] * b[i];
        printf("%d o elemento do vetor resultante: %d\n", (i+1), c[i]);
    }

system("pause");
return 0;
}
