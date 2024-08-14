#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);


    if (a > b) {
        temp = A;
        A = B;
        B = temp;
    }

    if (a > c) {
        temp = A;
        A = C;
        C = temp;
    }

    if (b > c) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("Valores em ordem crescente: %d, %d, %d", a, b, c);

    return 0;
}
