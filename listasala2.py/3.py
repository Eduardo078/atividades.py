
v1 = float(input("Digite o primeiro valor: "))

v2 = float(input("Digite o segundo valor: "))

if v1 > v2:
    d = v1 - v2
else:
    d = v2 - v1

print("A diferença do maior para o menor valor é:", '%.2f' %d)
