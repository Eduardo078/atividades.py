#include <stdio.h>

int main() {
    int i;
    for (i = 20; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d e par\n", i);
        } else {
            printf("%d e impar\n", i);
        }
    }
    return 0;
}
