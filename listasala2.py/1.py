n1 = float(input("Digite a nota 1:"))

n2 = float(input("DIgite a nota 2:")) 

n3 = float(input("digite a nota 3:"))

m = (n1 + n2 + n3) / 3

if m >= 6.0:
    print("Aprovado, sua nota foi:", '%.2f' %m) 
else:
    print("Reprovado, sua nota foi:", '%.2f' %m)