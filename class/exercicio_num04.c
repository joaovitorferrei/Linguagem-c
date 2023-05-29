/* Dadas duas seqüências com n números inteiros entre 0 e 9, interpretadas como dois números
inteiros de n algarismos, calcular a seqüência de números que representa a soma dos dois
inteiros.
Exemplo: n = 8 82434251
             + 33752337
			  ----------
			  116186588    */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int v1[8],v2[8],res[8]={0,0,0,0,0,0,0,0};
  int i;

  printf("Entre com valor do primeiro vetor 1: \n");
  for(i=7;i>=0;i--){
       scanf("%d",&v1[i]);
  }

  printf("Entre com valor do primeiro vetor 2: \n");
  for(i=7;i>=0;i--){
       scanf("%d",&v2[i]);
  } 

  for(i=7;i>=0;i--){
      if(v1[i]+v2[i] < 10){
         res[i]+=v1[i]+v2[i];
      }else{
          res[i]+=v1[i]+v2[i]-10;
          res[i+1]=res[i+1]+1;
      }
  } 

   printf("\n ");
   for(i=7;i>=0;i--){
      printf(" %d ",v1[i]);
   }
   printf("\n ");
   for(i=7;i>=0;i--){
      printf(" %d ",v2[i]);
   }
   printf("\n-------------------------\n ");

   for(i=7;i>=0;i--){
      printf(" %d ",res[i]);
   }
  printf("\n ");
  system("PAUSE");
  return 0;
}
