#include <stdio.h>

int main() {
    int soma = 0;
    int i;

    for (i = 1; i <= 500; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    printf("A soma dos numeros pares entre 1 e 500 e: %d\n", soma);
    return 0;
}
