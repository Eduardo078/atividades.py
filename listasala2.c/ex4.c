#include <stdio.h>
#include <stdbool.h>

int main(){
    float a, b, c, t;
    printf("Digite o primeiro valor:");
    scanf("%f", &a);
    printf("Digite o segundo valor:");
    scanf("%f", &b);
    printf("Digite o terceiro valor:");
    scanf("%f", &c);
    
    if ((a < b + c) && (b < a + c) && (c < c + a)){
        t = true;
        if ((a == b) && (c == b))
        printf("O triangulo é EQUILATERO");
        else if ((a == b) || (a == c) || (b == c)){
        printf("O triangulo é ISÓCELES");
    } 
    else{
        printf("O triangulo é ESCALENO");
    }
    if (t == false){
        printf("Os valores dados não correspondem um triangulo");
    }
    return 0;
    }
}
