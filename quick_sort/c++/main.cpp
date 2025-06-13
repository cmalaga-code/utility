#include <iostream>
#include <vector>

void swap(std::vector<int> &arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(std::vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int swapIndex = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swapIndex++;
            swap(arr, swapIndex, j);
        }
    }
    swap(arr, ++swapIndex, high);
    return swapIndex;
}

void quickSort(std::vector<int> &arr, int low, int high) {
    if (low <= high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}


int main() {
    std::vector<int> arr = {10, 23, 434, 2, 34534, 5, 6, 7, 767, 4, 5};
    std::cout << "Unsorted Array Below:" << "\n";
    for (auto &e: arr) {
        std::cout << e << " ";
    }
    std::cout << "\n";
    quickSort(arr, 0, arr.size() - 1);
    std::cout << "Sorted Array Below:" << "\n";
    for (auto &e: arr) {
        std::cout << e << " ";
    }
}