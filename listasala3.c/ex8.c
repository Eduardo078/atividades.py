#include <stdio.h>

int main() {
    int anterior = 0, atual = 1, proximo;
    int i;

    printf("Serie de Fibonacci:\n");
    for (i = 1; i <= 15; i++) {
        printf("%d\n", atual);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return 0;
}
