#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 20) {
        if (i % 2 == 0) {
            printf("%d e par\n", i);
        } else {
            printf("%d e impar\n", i);
        }
        i++;
    }
    return 0;
}
