package array_string_two_pointer_technique.palindrome.java;
import java.util.ArrayList;
import java.util.Arrays;
public class Main {
    public static void main(String[] args) {
        // System.out.println(isPali("racecar"));
        // System.out.println(isPali("what"));
        // ArrayList<Integer> x = new ArrayList<>(Arrays.asList(1, 3, 4, 20, 30));
        // System.out.println("Target Exists: " + targetExists(4, x));
        ArrayList<Integer> x = new ArrayList<>(Arrays.asList(1, 20, 334, 600));
        ArrayList<Integer> y = new ArrayList<>(Arrays.asList(200, 400, 800));
        System.out.println(returnTwoSorted(x, y)); 
    }
    public static boolean isPali(String x) {
        int left = 0;
        int right = x.length() - 1;

        while (left < right) {
            if (x.charAt(left) != x.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    public static boolean targetExists(int target, ArrayList<Integer> arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right){
            int currentSum = arr.get(left) + arr.get(right);
            if (currentSum == target) {
                return true;
            } 
            if (currentSum > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return false;

    }
    public static ArrayList<Integer> returnTwoSorted(ArrayList<Integer> x, ArrayList<Integer> y) {
        int i = 0;
        int j = 0;

        ArrayList<Integer> result = new ArrayList<>();
        while (i < x.size() && j < y.size()) {
            if (x.get(i) < y.get(j)) {
                result.add(x.get(i));
                i++;
            } else {
                result.add(y.get(j));
                j++;
            }
        }

        while (i < x.size()) {
            result.add(x.get(i));
            i++;
        }
        while (j < y.size()) {
            result.add(y.get(j));
            j++;
        }
        return result;
    }
}