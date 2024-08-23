#include <stdio.h>

int main() {
    char operacao;
    int a, b;
    do {
        printf("Digite uma operacao ('+', '-', '*', '/', 'S' para sair): ");
        scanf(" %c", &operacao);

        if (operacao == 'S' || operacao == 's') {
            break;
        }

        printf("Digite o primeiro numero: ");
        scanf("%d", &a);
        printf("Digite o segundo numero: ");
        scanf("%d", &b);

        switch (operacao) {
            case '+':
                printf("Resultado: %d + %d = %d\n", a, b, a + b);
                break;
            case '-':
                printf("Resultado: %d - %d = %d\n", a, b, a - b);
                break;
            case '*':
                printf("Resultado: %d * %d = %d\n", a, b, a * b);
                break;
            case '/':
                if (b != 0) {
                    printf("Resultado: %d / %d = %d\n", a, b, a / b);
                } else {
                    printf("Erro: Divisao por zero!\n");
                }
                break;
            default:
                printf("Operacao invalida!\n");
        }

    } while (operacao != 'S' && operacao != 's');

    return 0;
}
