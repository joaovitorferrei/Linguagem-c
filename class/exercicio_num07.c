/*
Faça um programa que:
a) Mostre a quantidade vendida por cada funcionário;
b) Mostre em qual ou quais dias da semana cada funcionário vendeu mais;
c) O nome do funcionário ou funcionários com maior valor de venda na semana;
d) Para cada dia da semana, a quantidade vendida por cada funcionário. */
#include <stdio.h>
#include <stdlib.h>

struct vendedor{
       char nome[50];
       float vendas[7];
       int maiorVenda;
};
typedef struct vendedor Vendedor;

int main(int argc, char *argv[])
{
  char semana[7][50] = {"Domingo","Segunda","Terca","Quarta","Quinta","Sexta","Sabado"};
  int n,i,j,fm;
  float maiorV,soma;
  printf("Entre com o numero de vendedores: "); 
  scanf("%d",&n);
  fflush(stdin);
  Vendedor fun[n];
  for(i=0;i<n;i++){
    maiorV =0;
    printf("Entre com o nome: ");
    gets(fun[i].nome);
    for(j=0;j<7;j++){
      printf("\nEntre com a Venda: %s :",semana[j]);
      scanf("%f",&fun[i].vendas[j]);
      if(fun[i].vendas[j]>=maiorV){
         maiorV=fun[i].vendas[j];
         fun[i].maiorVenda=j;
      }
    }
    fflush(stdin);
  }
  system("CLS");
  for(i=0;i<n;i++){
    soma=0;
    printf("Funcionario: %s\n",fun[i].nome);
    for(j=0;j<6;j++){
       soma+=fun[i].vendas[j];
    }
    printf("Soma vendas %.2f \n",soma);
    printf("Maior venda foi %s com total R$ %.2f \n",semana[fun[i].maiorVenda],fun[i].vendas[fun[i].maiorVenda]);
  }
  maiorV = fun[0].vendas[fun[0].maiorVenda];
  fm=0;
  for(i=0;i<n;i++){
     if(fun[i].vendas[fun[i].maiorVenda]>maiorV){
        maiorV=fun[i].vendas[fun[i].maiorVenda];
        fm=i;
     }

  }
  printf("\n Funcionario: %s teve melhor venda na semana\n",fun[fm].nome);
  printf("Vendeu R$ %.2f : %s \n",fun[fm].vendas[fun[fm].maiorVenda],semana[fun[fm].maiorVenda]);



  system("PAUSE");
  return 0;
}
