#include <stdio.h>
#include <math.h>

int main() {
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("%d elevado a %d = %.0f\n", base, expoente, pow(base, expoente));
    return 0;
}
