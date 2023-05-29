#include<stdio.h>
#include<stdlib.h>
/* Dada uma sequência de n números reais, determinar os números que compõem a sequência
e o número de vezes que cada um deles ocorre na mesma.
Exemplo: n = 8
Sequência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
Saída: -1.7 ocorre 3 vezes

 3.0 ocorre 1 vez
 0.0 ocorre 2 vezes
 1.5 ocorre 1 vez
 2.3 ocorre 1 vez*/
int main(){
int n,i,numero,t=0,j,novo=1,cont=0;
printf("entre com a quantidade de numeros: ");
scanf("%d",&n);
int freq[n][2];
int v[n];

for(i=0;i<n;i++){
      freq[i][0]=0; 
      freq[i][1]=0;
}
for(i=0;i<n;i++){
 printf("Entre o numero: ");
 scanf("%d",&v[i]);
} 

for(i=0;i<n;i++){
  cont=0; 
  novo=1;
  for(j=0;j<n;j++){ 
     if(v[i]==v[j]){
        cont++;
     }
    }
  for(j=0;j<=t;j++){ 
     if(v[i]==freq[j][0]){
        novo=0; 
        break;
     }
   }
   if(novo){
      freq[t][0]=v[i];
      freq[t][1]=cont;
      t++;
      novo=1;
      }
  }

for(i=0;i<t;i++)
printf("%d %d \n",freq[i][0],freq[i][1]);


system("pause");
return 0;
}
