#include <stdio.h>

int main() {
    int numero;
    int i;

    printf("Digite o numero para a tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:\n", numero);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
