#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* 
Calcule o valor do polinômio p(x)=a0+a1x+...+anx n
em k pontos distintos. São dados os
valores de n (grau do polinômio), de a0, a1, ..., an (coeficientes reais do polinômio), de k e
dos pontos x1, x2, ..., xk. */
int main(){

int k,i;

float x,p;

printf("digite o grau do polimonio:");
scanf("%d",&k);
int poli[k];

for(i=0;i<k;i++){
    scanf("%d",&poli[i]);
}
printf("digite o valor de x:");
scanf("%f",&x);

for(i=0;i<k;i++){
    p+=poli[i]*pow(x,i);
   }

printf("o resultado é: %.2f\n",p);

system("pause");
return 0;
} 

