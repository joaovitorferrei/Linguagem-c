/*
Escreva um programa que leia um caracter e diga se ele � uma vogal, consoante, n�mero ou um
s�mbolo (qualquer outro caracter, que n�o uma letra ou n�mero).
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
int numero;
char letra;

    printf("digite a letra: ");
    scanf("%c",&letra);

    if(isalpha(letra)){
        switch(letra){
            case 'a':
                 printf("Vogal a\n");
                 break;
            case 'e':
               printf("Vogal e\n");
                 break;
            case 'i':
               printf("Vogal i\n");
                 break;
            case 'o':
               printf("Vogal o\n");
                 break;
            case 'u':
               printf("Vogal u\n");
                 break;
            default:
             printf("sua letra e uma consoante. \n");
             }
    }else{
          if(isalnum(letra)){
              printf("E um numeral \n");
          }else{
                printf("E um simbolo \n");
                }
    }

system("pause");
return 0;
}
