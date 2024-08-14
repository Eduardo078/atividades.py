#include <stdio.h>

int main(){ 
    int n1, n2, n3;
    printf("DIgite os tres valores:");
    scanf("%i%i%i", &n1, &n2, &n3);

    if ((n1 % 2 == 0) && (n1 % 3 == 0))
        printf("O número divisível por 2 e 3: %i", n1);
    if ((n2 % 2 == 0) && (n2 % 3 == 0))
    printf("o número divisivel por 2 e 3: %i", n2);    
    if ((n3 % 2 == 0) && (n3 % 3 == 0))
    printf("O número divisível por 2 e 3: %i", n3);

    return 0;

}
