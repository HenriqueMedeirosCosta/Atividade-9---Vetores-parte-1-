#include <stdio.h>

int main() {
    int vetor[8]; 
    int X, Y; // Valores X e Y correspondentes às posições no vetor
    
    printf("Digite 8 valores inteiros para o vetor:\n");

    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite dois valores para X e Y (posições no vetor): ");
    scanf("%d %d", &X, &Y);
  
    if (X >= 0 && X < 8 && Y >= 0 && Y < 8) {
        int soma = vetor[X] + vetor[Y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", X, Y, soma);
    } else {
        printf("Valores de X e Y estão fora dos limites do vetor.\n");
    }

    return 0;
}
