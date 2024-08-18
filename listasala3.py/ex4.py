n = int(input("Digite um numero de 0 a 50:"))

if n <= 50:
    valor = n
    while valor < 250:
        print(valor)
        valor *= 3
else:
   print("O numero é maior que 50")