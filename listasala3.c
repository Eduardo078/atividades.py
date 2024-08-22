#include <stdio.h>

int main() {
    int numero;
    for (numero = 0; numero <= 20; numero++) {
        if (numero % 2 != 0) {
            printf("%d\n", numero);
        }
    }
    return 0;
}