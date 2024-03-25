def addition(a, b):
    return a + b

def subtraction(a, b):
    return a - b

def multiplication(a, b):
    return a * b

def division(a, b):
    return a / b

def power(a, b):
    return a ** b

def factorial(a):
    fact = 1
    for i in range(1, a + 1):
        fact *= i
    return fact

def evaluate(a, b):
    return {
        'addition': addition(a, b),
        'subtraction': subtraction(a, b),
        'multiplication': multiplication(a, b),
        'division': division(a, b),
        'factorial': factorial(a)
    }

a = 5
b = 6
print(evaluate(a, b))
