import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        List<Integer> arrayA = new ArrayList<>(Arrays.asList(1, 3, 5));
        List<Integer> arrayB = new ArrayList<>(Arrays.asList(2, 4, 6, 7));
        List<Integer> arrayC = new ArrayList<>();

        int lengthA = arrayA.size();

        arrayC.addAll(arrayA);
        arrayC.addAll(arrayB);
        Collections.sort(arrayC);

        arrayA.clear();
        arrayB.clear();

        arrayA.addAll(arrayC.subList(0, lengthA));
        arrayB.addAll(arrayC.subList(lengthA, arrayC.size()));

        System.out.println(arrayA);
        System.out.println(arrayB);
    }
}
