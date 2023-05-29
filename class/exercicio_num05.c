#include <stdio.h>
#include<stdlib.h>
#define LIM 500
/*Faça um programa que inverta a ordem dos elementos de um vetor sem usar um vetor
auxiliar. */
int main(){
  int n,i,j,tmp;
  int vet[LIM];
 
  //Leitura dos dados do vetor:
  printf("Entre com n: ");
  scanf("%d", &n);
  printf("Entre com %d elementos: ",n);
  for(i = 0; i < n; i++)
    scanf("%d", &vet[i]);
 
  //Invertendo os dados no vetor:/ 
  j = n-1;
  for(i = 0; i < n/2; i++){
    tmp = vet[i];
    vet[i] = vet[j];
    vet[j] = tmp;
    j--;
  }
 
  //Imprimindo o vetor invertido:/ 
  for(i = 0; i < n; i++)
    printf("%d ",vet[i]);
  printf("\n");
 system ("pause");
  return 0;
} 
