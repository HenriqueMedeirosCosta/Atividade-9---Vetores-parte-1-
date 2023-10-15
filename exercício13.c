#include<stdio.h>

main(){
  int vetor[5], menor=0, maior=0,pmenor=0, pmaior=0;

   for(int i = 0; i<5; i++){
     
     printf("\nDigite um numero:\n");
     scanf("%d", &vetor[i]);
   }

   maior = vetor[0];
   menor = vetor[0];
   for(int i = 0; i<5; i++){
     if(vetor[i]>maior){
       maior = vetor[i];
       pmaior=i;
     }

     if(vetor[i]<menor){
       menor = vetor[i];
       pmenor=i;
     }
   }
   printf("\nA posição do maior valor é: %d \nelemento: %d",pmaior, maior);
   printf("\nA posição do menor valor é: %d \nelemnto:%d",pmenor, menor);
}
