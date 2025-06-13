import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(List.of(10, 23, 434, 2, 34534, 5, 6, 7, 767, 4, 5));
        System.out.println("Unsorted Array Below:");
        for (int e: arr) {
            System.out.printf("%d ", e);
        }
        System.out.print("\n");
        System.out.println("Sorted Array Below:");
        quickSort(arr, 0, arr.size() - 1);
        for (int e: arr) {
            System.out.printf("%d ", e);
        }
    }
    public static void swap(ArrayList<Integer> arr, int i, int j) {
        int temp = arr.get(i);
        arr.set(i, arr.get(j));
        arr.set(j, temp);
    }
    public static int partition(ArrayList<Integer> arr, int low, int high) {
        int pivot = arr.get(high);
        int swapIndex = low - 1;

        for (int j = low; j < high; j++) {
            if (arr.get(j) <= pivot) {
                swapIndex++;
                swap(arr, swapIndex, j);
            }
        }
        swap(arr, ++swapIndex, high);
        return swapIndex;
    }
    public static void quickSort(ArrayList<Integer> arr, int low, int high) {
        if (low <= high) {
            int pivotIndex = partition(arr, low, high);
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }
}