#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero N (menor ou igual a 50): ");
    scanf("%d", &n);

    while (n < 250) {
        printf("%d\n", n);
        n *= 3;
    }
    return 0;
}
