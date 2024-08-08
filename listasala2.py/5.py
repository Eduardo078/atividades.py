A = float(input("Digite o primeiro valor: "))

B = float(input("Digite o segundo valor: "))

C = float(input("Digite o terceiro valor: "))

if A > B:
    A, B = B, A
if B > C:
    B, C = C, B
if A > B:
    A, B = B, A

print("Os valores em ordem crescente são:", A, B, C)
