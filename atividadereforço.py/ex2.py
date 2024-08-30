def faixa_elemento(valor):
    if valor < 0:
        return 1
    elif valor >= 0 and valor < 15:
        return 2
    elif valor >= 15 and valor < 100:
        return 3
    elif valor >= 100 and valor < 1000:
        return 5
    elif valor >= 1000:
        return 4

def verificar_par_ou_impar(valor):
    return 'par' if valor % 2 == 0 else 'ímpar'

def executar_programa():
    elementos = []
    total_pares = 0
    total_impares = 0
    faixas = {
        1: {'quantidade': 0, 'total': 0},
        2: {'quantidade': 0, 'total': 0},
        3: {'quantidade': 0, 'total': 0},
        4: {'quantidade': 0, 'total': 0},
        5: {'quantidade': 0, 'total': 0},
    }

    while True:
        valor = float(input("Digite um valor (ou 'sair' para finalizar): "))
        elementos.append(valor)

        faixa = faixa_elemento(valor)
        faixas[faixa]['quantidade'] += 1
        faixas[faixa]['total'] += valor

        if verificar_par_ou_impar(valor) == 'par':
            total_pares += 1
        else:
            total_impares += 1

        continuar = input("Deseja inserir outro valor? (s/n): ").lower()
        if continuar == 'n':
            break

 
    media = sum(elementos) / len(elementos)
    maior_valor = max(elementos)
    menor_valor = min(elementos)

    print("\nResultados:")
    print(f"Média aritmética dos valores: {media:.2f}")
    print(f"Maior valor: {maior_valor}")
    print(f"Menor valor: {menor_valor}")
    print(f"Total de valores pares: {total_pares}")
    print(f"Total de valores ímpares: {total_impares}\n")

    print("Contagem por faixa:")
    for faixa, dados in faixas.items():
        print(f"Faixa {faixa}: {dados['quantidade']} valores, Total: {dados['total']:.2f}")


executar_programa()
