#include <stdio.h>

int calcular_faixa(float valor) {
    if (valor < 0) return 1;
    else if (valor >= 0 && valor < 15) return 2;
    else if (valor >= 15 && valor < 100) return 3;
    else if (valor >= 1000) return 4;
    else return 5;
}

int main() {
    float valor;
    float soma_total = 0;
    int total_pares = 0;
    int total_impares = 0;
    int faixas[5] = {0};
    float totais_faixas[5] = {0};
    float maior = -1e10; 
    float menor = 1e10;  
    int continuar = 1;

    while (continuar) {
        printf("Digite um valor (ou um valor negativo para encerrar): ");
        scanf("%f", &valor);

        if (valor < 0) {
            continuar = 0;
            break;
        }

        int faixa = calcular_faixa(valor);
        faixas[faixa - 1]++;
        totais_faixas[faixa - 1] += valor;
        soma_total += valor;

        if (valor > maior) maior = valor;
        if (valor < menor) menor = valor;

        if ((int)valor % 2 == 0) total_pares++;
        else total_impares++;
    }

    int total_valores = faixas[0] + faixas[1] + faixas[2] + faixas[3] + faixas[4];
    float media = total_valores ? soma_total / total_valores : 0;

    printf("Média aritmética: %.2f\n", media);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    for (int i = 0; i < 5; i++) {
        printf("Faixa %d:\n", i + 1);
        printf("Total de elementos: %d\n", faixas[i]);
        printf("Total da faixa: %.2f\n", totais_faixas[i]);
    }

    printf("Total de Pares: %d\n", total_pares);
    printf("Total de Ímpares: %d\n", total_impares);

    return 0;
}
