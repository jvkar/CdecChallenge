#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

double division(int a, int b) {
    return (double)a / b;
}

double power(int a, int b) {
    double result = 1.0;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int factorial(int a) {
    int fact = 1;
    for (int i = a; i > 0; i--) {
        fact *= i;
    }
    return fact;
}

void evaluate(int a, int b) {
    printf("addition: %d\n", addition(a, b));
    printf("subtraction: %d\n", subtraction(a, b));
    printf("multiplication: %d\n", multiplication(a, b));
    printf("division: %f\n", division(a, b));
    printf("factorial: %d\n", factorial(a));
}

int main() {
    int a = 5;
    int b = 6;
    evaluate(a, b);
    return 0;
}
