import java.util.HashMap;
import java.util.Map;

public class Main {
    public static int addition(int a, int b) {
        return a + b;
    }

    public static int subtraction(int a, int b) {
        return a - b;
    }

    public static int multiplication(int a, int b) {
        return a * b;
    }

    public static double division(int a, int b) {
        return (double) a / b;
    }

    public static double power(int a, int b) {
        return Math.pow(a, b);
    }

    public static int factorial(int a) {
        int fact = 1;
        for (int i = a; i > 0; i--) {
            fact *= i;
        }
        return fact;
    }

    public static Map<String, Number> evaluate(int a, int b) {
        Map<String, Number> result = new HashMap<>();
        result.put("addition", addition(a, b));
        result.put("subtraction", subtraction(a, b));
        result.put("multiplication", multiplication(a, b));
        result.put("division", division(a, b));
        result.put("factorial", factorial(a));
        return result;
    }

    public static void main(String[] args) {
        int a = 5;
        int b = 6;
        System.out.println(evaluate(a, b));
    }
}
