#include <stdio.h>

int main() {
    int i = 20;
    while (i >= 1) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i--;
    }
    return 0;
}
