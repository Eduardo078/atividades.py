curso = int(input("Digite o número do do curso (1 a 5): "))


cursos = {
    1: "Engenharia",
    2: "Edificações",
    3: "Sistemas elétricos",
    4: "Turismo",
    5: "Analise de sistemas",
}


if curso >= 1 and curso <= 5:
    print("O curso correspondente é:", cursos[curso])
else:
    print("Número do curso é inválido.")
