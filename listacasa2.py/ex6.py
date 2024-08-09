mes = int(input("Digite o número do mês (1 a 12): "))


meses = {
    0: "nada",
    1: "Janeiro",
    2: "Fevereiro",
    3: "Março",
    4: "Abril",
    5: "Maio",
    6: "Junho",
    7: "Julho",
    8: "Agosto",
    9: "Setembro",
    10: "Outubro",
    11: "Novembro",
    12: "Dezembro"
}


if mes >= 1 and mes <= 12:
    print("O mês correspondente é:", meses[mes])
else:
    print("Número de mês inválido.")
