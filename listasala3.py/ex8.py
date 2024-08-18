a = 1
b = 1

print(a)
print(b)


for _ in range(13):  
    a, b = b, a + b
    print(b)
