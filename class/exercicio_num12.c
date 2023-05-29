/*
Escreva um programa que leia um número e exiba o seu módulo.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
   int modulo;
   printf("entre com seu numero positivo ou negativo: ");
   scanf("%d",&modulo);

if (modulo >  0)
{
   printf("seu numero positivo %d\n",modulo);
}
else
{
  modulo = modulo *-1;

   printf("seu numero positivo e %d\n",modulo);
}


     system ("pause");
return 0;
} 
