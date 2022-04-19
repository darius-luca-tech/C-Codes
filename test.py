lista = [1234, 43253, 657568, 21235]
lista2 = []
k = 3;
counter = 0

for elem in lista:
    counter = 0
    while(elem):
        if(elem % 10 == k):
            counter += 1
        elem //= 10
    lista2.append(counter)


print(lista2)

