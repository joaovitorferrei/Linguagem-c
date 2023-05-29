/*
achar se o numero é inpar ou par*/
#include<stdio.h>
#include<stdlib.h>
int impar_par(int num)
{

switch(num % 2){
   case 0:
printf("par %d",num);
break;
default:
printf("impar %d",num);
break;
}

}

int main(){ 

   int numero;

   printf("entre com um primeiro numero: ");
   scanf("%d",&numero);

   impar_par(numero);


return 0;
}
