salb = float(input("digite o seu salario burto:"))

ht = float(input("digite as horas trabalhadas no mês:"))

ie = 0
ir = 0 
b = 0

if salb < 800:
    ie = 0
    ir = 0
elif 800 <= salb <= 1600:
    ie = salb * 0.05
    ir = salb * 0.08
elif salb > 1600:
    ie = salb * 0.07
    ie = salb * 0.15
if ht > 160:
    he = ht - 160
    vh = salb / 160
    b = he * vh * 0.5
sl = salb - (ie+ir) + b
print("O salario liquidio é:", '%.2f' %sl)