#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* 
Calcule o valor do polin�mio p(x)=a0+a1x+...+anx n
em k pontos distintos. S�o dados os
valores de n (grau do polin�mio), de a0, a1, ..., an (coeficientes reais do polin�mio), de k e
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

printf("o resultado �: %.2f\n",p);

system("pause");
return 0;
} 

