#include <stdio.h>

int main(){ 
    int n1, n2, n3;
    printf("DIgite os tres valores:");
    scanf("%i%i%i", &n1, &n2, &n3);

    if ((n1 % 4 == 0) || (n1 % 5 == 0))
        printf("O número divisível por 4 e 5: %i", n1);
    if ((n2 % 4 == 0) || (n2 % 5 == 0))
    printf("o número divisivel por 4 e 5: %i", n2);    
    if ((n3 % 4 == 0) || (n3 % 5 == 0))
    printf("O número divisível por 4 e 5: %i", n3);

    return 0;

}