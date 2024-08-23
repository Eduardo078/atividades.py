#include <stdio.h>

int main() {
    int numero;
    int i;
    printf("Digite um numero para exibir a tabuada: ");
    scanf("%d", &numero);
    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
