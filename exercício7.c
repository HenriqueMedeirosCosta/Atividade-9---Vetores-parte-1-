#include <stdio.h>

 main() {

  int num[10],maiorValor=0, i=0,posicao;

  for(int i=0;i<10;i++){
      printf("\nDigite um numero:\n");
      scanf("%d",&num[i]);

      if(num[i] > maiorValor){
        maiorValor=num[i];
        posicao=i;
      }
  }

  for(int i=0;i<10;i++){
    printf("\n%d",num[i]);
    
  }
   printf("\nMaior elemento %d, Posição %d ", maiorValor, posicao);
 }
