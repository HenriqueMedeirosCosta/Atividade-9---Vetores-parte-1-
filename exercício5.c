#include <stdio.h>

int main() {
    int vetor[10]; 
    int contadorPares = 0; 
    printf("Digite 10 valores inteiros para o vetor:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            contadorPares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", contadorPares);

    return 0;
}
