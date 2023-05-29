
#include<stdio.h>
#include<stdlib.h>

int main(){
  int prest1,prest2;
  float valorme,vlent;


  printf("informe o valor da mercadoria: ");
    scanf("%f",&valorme);
           prest1 = valorme/3;
           prest2 = prest1;
           vlent = valorme - (prest1 + prest2);
   printf("valor de entrada e: %.2f\n valor da primeira prestacao: %d\n valor da segunda prestacao: %d\n",vlent,prest1,prest2); 

system("pause");

return 0;


}
