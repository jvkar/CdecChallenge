#include <iostream>
#include <cmath>
#include <map>

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
    return static_cast<double>(a) / b;
}

double power(int a, int b) {
    return std::pow(a, b);
}

int factorial(int a) {
    int fact = 1;
    for (int i = a; i > 0; i--) {
        fact *= i;
    }
    return fact;
}

std::map<std::string, double> evaluate(int a, int b) {
    std::map<std::string, double> result;
    result["addition"] = addition(a, b);
    result["subtraction"] = subtraction(a, b);
    result["multiplication"] = multiplication(a, b);
    result["division"] = division(a, b);
    result["factorial"] = factorial(a);
    return result;
}

int main() {
    int a = 5;
    int b = 6;
    auto result = evaluate(a, b);
    for (const auto& entry : result) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}
