def calcular_aumento(salario_atual):
    if salario_atual <= 400.00:
        aumento_percentual = 15
    elif salario_atual <= 700.00:
        aumento_percentual = 12
    elif salario_atual <= 1000.00:
        aumento_percentual = 10
    elif salario_atual <= 1800.00:
        aumento_percentual = 7
    elif salario_atual <= 2500.00:
        aumento_percentual = 4
    else:
        aumento_percentual = 0
    
    return aumento_percentual

def calcular_novo_salario(salario_atual, aumento_percentual):
    aumento_valor = salario_atual * (aumento_percentual / 100)
    novo_salario = salario_atual + aumento_valor
    return novo_salario


nome = input("Digite o nome do funcionário: ")
salario_atual = float(input("Digite o salário atual do funcionário (R$): "))


aumento_percentual = calcular_aumento(salario_atual)
novo_salario = calcular_novo_salario(salario_atual, aumento_percentual)


print("\nInformações do funcionário:")
print(f"Nome: {nome}")
print(f"% de aumento: {aumento_percentual}%")
print(f"Salário atual: R$ {salario_atual:.2f}")
print(f"Novo salário: R$ {novo_salario:.2f}")
