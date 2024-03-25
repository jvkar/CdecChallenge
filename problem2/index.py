a = [1, 0, 1, 0, 1, 0]
value = 0
cpt = 0

for i in range(len(a) - 1, -1, -1):
    if a[i] == 1:
        value += 2 ** cpt
    cpt += 1

print(value)
