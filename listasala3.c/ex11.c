#include <stdio.h>

int main() {
    int numeros[5];
    int i, maior, menor;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];

    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
