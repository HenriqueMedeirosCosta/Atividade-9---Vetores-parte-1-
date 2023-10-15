#include <stdio.h>

int main() {
    double numeros[10]; 
    double quadrados[10]; 

    printf("Digite 10 números reais:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numeros[i]);
        quadrados[i] = numeros[i] * numeros[i];
    }
    printf("Conjunto de números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("%lf ", numeros[i]);
    }

    printf("\n");

    printf("Conjunto de quadrados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%lf ", quadrados[i]);
    }

    return 0;
}

