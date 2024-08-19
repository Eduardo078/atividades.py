while True:
     
     op = (input("Entre com a operação (+, -, /, *, S):"))
     a = float(input("Digite o primeiro valor:"))
     b = float(input("Digite o segundo valor:"))
     resultado = 0
     
     if op == 'S':
        print("Ok, Saindo do progama.")
        break
     
     if op == '+':
         resultado = a + b
         print("Resultado", resultado)
     elif op == '-':
         resultado = a * b  
         print("Resultado", resultado)
     elif op == '*':
         resultado = a * b  
         print("Resultado", resultado)
     elif op == '/':
         if a and b != 0:
             resultado = a / b
             print("Resultado", resultado)
         else:
             print("Não é permitido divisão com zero:")
     else:
         print("Operação invalida.") 
