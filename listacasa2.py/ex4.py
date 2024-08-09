num1 = float(input("digite um numero:"))

num2 = float(input("digite o segundo número:"))

num3 = float(input("digite o terceiro número:"))

if num1 > num2 > num3:
    print(f"o maior numero é {num1}, o numero do meio é {num2} e o número menor é {num3}.")

elif num1 > num3 > num2:
    print(f"o maior numero é {num1}, o numero do meio é {num3} e o número menor é {num2}.")

elif num2 > num1 > num3:
    print(f"o maior numero é {num2}, o numero do meio é {num1} e o número menor é {num3}.")

elif num2 > num3 > num1:
    print(f"o maior numero é {num2}, o numero do meio é {num3} e o número menor é {num1}.")

elif num3 > num2 > num1:
    print(f"o maior numero é {num3}, o numero do meio é {num2} e o número menor é {num1}.")

elif num3 > num1 > num2:
    print(f"o maior numero é {num3}, o numero do meio é {num1} e o número menor é {num2}.")

