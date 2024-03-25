arrayA = [1, 3, 5]
arrayB = [2, 4, 6, 7]
arrayC = []
lengthA = len(arrayA)
arrayC.extend(arrayA)
arrayC.extend(arrayB)
arrayC.sort()
arrayA.clear()
arrayB.clear()
arrayA = arrayC[:lengthA]
arrayB = arrayC[lengthA:]
print(arrayA)
print(arrayB)
