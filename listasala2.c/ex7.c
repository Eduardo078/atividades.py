#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    
    int va = abs(n);
    
    
    printf("O valor absoluto é: %d\n", va);
    
    return 0;
}
