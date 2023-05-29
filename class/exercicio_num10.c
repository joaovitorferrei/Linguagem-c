/*
Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuário
informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/
#include<stdio.h>
int main(){

int ano;
printf("digite o ano que voce quer saber se e bissexto ou nao: ");
scanf("%d",&ano);

if(ano % 4 == 0 & ano % 100 != 0 || ano % 400 == 0){
     printf("seu ano e BISSEXTO\n");
}
else{
  printf("seu ano não e BISSEXTO\n");
}
system("pause");
return 0;
}
