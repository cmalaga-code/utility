package merge_sort.java;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String args[]) {
        List<Integer> example = new ArrayList<>(Arrays.asList(34, 23, 1, 34, 45465, 4, 2, 32, 45));
        System.out.println("List before ...");
        for (int e: example) {
            System.out.printf("%d ", e);
        }
        System.out.print("\n");
        System.out.println("List after ...");
        mergeSort(example);
        for (int e: example) {
            System.out.printf("%d ", e);
        }

    }
    public static void mergeSort(List<Integer> arr) {
        if (arr.size() > 1) {
            int mid = arr.size() / 2;
            List<Integer> left = new ArrayList<>(arr.subList(0, mid));
            List<Integer> right = new ArrayList<>(arr.subList(mid, arr.size()));

            mergeSort(left);
            mergeSort(right);

            int i = 0, j = 0, k = 0;

            while (i < left.size() && j < right.size()) {
                if (left.get(i) < right.get(j)) {
                    arr.set(k, left.get(i));
                    i++;
                } else {
                    arr.set(k, right.get(j));
                    j++;
                }
                k++;
            }

            while (i < left.size()) {
                arr.set(k, left.get(i));
                i++;
                k++;
            }

            while (j < right.size()) {
                arr.set(k, right.get(j));
                j++;
                k++;
            }
        }
    }
}
