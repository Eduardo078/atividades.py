#include <stdio.h>
int main(){
    int a, b, d;

    printf("Digite o primeiro valor:");
    scanf("%i", &a);
    printf("Digite o segundo valor:");
    scanf("%i", &b);

    if (a > b){
        d = a - b;
        printf("A diferença do maior para menor é: %i", d);
    }
    else{
        d = b - a;
        printf("A diferença do maior para menor é: %i", d);
    }

    return 0;
}