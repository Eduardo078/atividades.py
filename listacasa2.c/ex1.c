#include <stdio.h>

int main(){
    int num;
    
    printf("Entre com um numero:");
    scanf("%i", &num);

    if (num % 2 == 0)
        printf("o número é PAR!!!");
    else
        printf("o número é IMPAR!!!");


    return 0;    
}