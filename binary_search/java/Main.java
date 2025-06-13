package binary_search.java;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> myArray = new ArrayList<>(List.of(0, 1, 2, 3, 4, 13, 14, 15, 16, 17, 18, 19, 20));
        System.out.printf("This is the index you looked for: %d", binarySearch(myArray, 13));
    }
    public static int binarySearch(ArrayList<Integer> arr, int value) {
        int left = 0;
        int right = arr.size() - 1;
        while (left <= right) {
            int m = (left + right) / 2;
            if (arr.get(m) < value) {
                left = m + 1;
            } else if (arr.get(m) > value) {
                right = m - 1;
            } else {
                return m;
            }
        }
        return -1;
    }
}
