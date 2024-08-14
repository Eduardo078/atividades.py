#include <stdio.com>
int main(){
    float n1, n2, ne, m, nm;
    m = (n1 + n2) / 2
    nm = (m + ne) / 2

    printf("digite a nota 1:");
    scanf("%f", &n1);
    printf("digite a nota 2:");
    scanf("%f", &n2);

    if (m >= 6.0)
        printf("Aprovado, média: %f", m);
    else if (m < 6.0){
        printf("Reprovado, digite a nota do exame:");
        scanf("%f", &ne);
        }
    if (nm >= 5.0)
        printf("Aprovado, média: %f", nm);
    else
        printf("Reprovado novamente, média: %f", nm)

    return 0;
}