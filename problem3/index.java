import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        int[] Array1 = {1, 2, 3, 5, 6, 7};
        int[] Array2 = {3, 4, 6, 7};
        List<Integer> A3 = new ArrayList<>();

        for (int i : Array1) {
            for (int j : Array2) {
                if (i == j) {
                    A3.add(i);
                }
            }
        }

        System.out.println(A3);
    }
}
