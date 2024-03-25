Array1 = [1, 2, 3, 5, 6, 7]
Array2 = [3, 4, 6, 7]
A3 = []

for i in Array1:
    for j in Array2:
        if i == j:
            A3.append(i)

print(A3)
