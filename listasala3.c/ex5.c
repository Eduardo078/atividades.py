#include <stdio.h>

int main() {
    int contador;
    for (contador = 1; contador < 200; contador++) {
        if (contador % 4 == 0) {
            printf("%d\n", contador);
        }
    }
    return 0;
}
