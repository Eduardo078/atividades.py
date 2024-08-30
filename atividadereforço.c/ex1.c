#include <stdio.h>

float calcular_aumento(float salario_atual, float *percentual) {
    if (salario_atual >= 0 && salario_atual <= 400) {
        *percentual = 15;
    } else if (salario_atual >= 401 && salario_atual <= 700) {
        *percentual = 12;
    } else if (salario_atual >= 701 && salario_atual <= 1000) {
        *percentual = 10;
    } else if (salario_atual >= 1001 && salario_atual <= 1800) {
        *percentual = 7;
    } else if (salario_atual >= 1801 && salario_atual <= 2500) {
        *percentual = 4;
    } else {
        *percentual = 0;
    }
    return salario_atual * (1 + (*percentual / 100));
}

int main() {
    char nome[100];
    float salario_atual, percentual, novo_salario;

    printf("Digite o nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Digite o salário atual (R$): ");
    scanf("%f", &salario_atual);
    
    novo_salario = calcular_aumento(salario_atual, &percentual);
    
    printf("Nome do funcionário: %s", nome);
    printf("%% de aumento: %.2f%%\n", percentual);
    printf("Salário atual: R$%.2f\n", salario_atual);
    printf("Novo salário: R$%.2f\n", novo_salario);
    
    return 0;
}
