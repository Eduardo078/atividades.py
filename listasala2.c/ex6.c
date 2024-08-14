#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, x1, x2, x3, x4;
    printf("Digite o valor do coeficiente a, b, e c:");
    scanf("%f, %f, %f", &a, &b, &c);
    if (a!=0){
        d = ((b*b) - (4*a*c));
        if (d < 0){
            printf("esta equação não tem resolução");
        }
        else if (d == 0){
            x1 = (-b)/ (2*a);
            x2 = x1;
            printf("A equação possui duas raizes iguais: %f, %f", x1, x2);
        }
        else{
            x1 = pow((-b) + d, 0.5) / (2*a);
            x2 = pow((-b) + d, 0.5) / (2*a);
            printf("A equação possui duas raizes reais e diferentes: %f, %f", x1, x2);
        }
    }
}