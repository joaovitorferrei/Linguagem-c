/*
Escreva um programa que leia os dados de um funcionário e que aplique um aumento sobre
o seu salário, sendo que a empresa definiu um aumento de 10% para quem possuir mais de
cinco anos de casa e for casado, para os demais o aumento é de 8%. Esse aumento deve ser
calculado por uma função. Dados de entrada: salário bruto, quantidades de anos na empresa,
e estado civil (C, c, S, s). Dados de saída: taxa do aumento, salário inicial, e salário com
aumento do funcionário
*/
#include<stdio.h>

int main(){
    float salario,empresa,result,resultado;
    int op;

        printf("voce e casado se sim digite 1 se nao digite 0: ");
        scanf("%d",&op);
        fflush(stdin);
        printf("digite seu salario: ");
        scanf("%f",&salario);
        fflush(stdin);
        printf("digite quantos anos esta na empresa: ");
        scanf("%d",&empresa);
        fflush(stdin);
    switch(op){
    case 1:
    if(empresa<=5){
     resultado = (salario * 0.1);
     result = (salario * 1.1);
     printf("seu salario e %0.2f",result);
     printf("seu aumento e %0.2f",resultado);
     }else{
          resultado = (salario * 0.08);
         result = (salario * 1.08);
         printf("seu salario e %0.2f",result);
         printf("seu aumento e %0.2f",resultado);
         }

     break;
    case 0:
      resultado = (salario * 0.08);
      result = (salario * 1.08);

      printf("seu salario e %0.2f\n",result);
      printf("seu aumento e %0.2f",resultado);
     break;
 
     default:
       printf("este numero não esta na lista de opicao");
}

return 0;
}
