n = int(input("Digite o número para a tabuada: "))

print("Tabuada do:", n)

for m in range(11):
    r = n * m
    print(f"{n} x {m} = {r}")
