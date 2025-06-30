import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        System.out.println(primeList(9));
    }
    public static ArrayList<Integer> primeList(int x) {
        ArrayList<Integer> result = new ArrayList<>();
        for (int i = 2; i < x; i++) {
            if (isPrime(i)) {
                result.add(i);
            }
        }
        return result;
    }
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}