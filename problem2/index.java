public class Main {
    public static void main(String[] args) {
        int[] a = {1, 0, 1, 0, 1, 0};
        int value = 0;
        int cpt = 0;

        for (int i = a.length - 1; i >= 0; i--) {
            if (a[i] == 1) {
                value += Math.pow(2, cpt);
            }
            cpt++;
        }

        System.out.println(value);
    }
}
