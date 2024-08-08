n1 = float(input("Digite a primeira nota do aluno: "))

n2 = float(input("Digite a segunda nota do aluno: "))

m = (n1 + n2) / 2

if m >= 6.0:
    print("Aluno aprovado com média:", '%.2f' %m)
else:
    ex = float(input("Aluno reprovado. Digite a nota do exame: "))
    nm = (m + ex) / 2
    
    if nm >= 5.0:
        print("Aluno aprovado em exame com média:", '%.2f' %nm)
    else:
        print("Aluno reprovado com média:", '%.2f' %nm)