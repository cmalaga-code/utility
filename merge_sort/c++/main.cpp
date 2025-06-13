#include <vector>
#include <iostream>


void mergeSort(std::vector<int> &arr) {
    if (arr.size() > 1) {
        int mid = arr.size() / 2;
        std::vector<int> left(arr.begin(), arr.begin() + mid);
        std::vector<int> right(arr.begin() + mid, arr.end());

        mergeSort(left);
        mergeSort(right);

        int i = 0, j = 0, k = 0;

        while (i < left.size() && j < right.size()) {
            if (left.at(i) < right.at(j)) {
                arr.at(k) = left.at(i);
                i++;
            } else {
                arr.at(k) = right.at(j);
                j++;
            }
            k++;
        }

        while (i < left.size()) {
            arr[k] = left[i];
            i++;
            k++;
        }

        while (j < right.size()) {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
}


int main() {
    std::vector<int> example = {34, 23, 1, 34, 45465, 4, 2, 32, 45};
    std::cout << "Vector Before ...." << std::endl;
    for (auto &e: example) {
        std::cout << e << " ";
    }
    std::cout << "\n";
    std::cout << "Vector After ...." << std::endl;
    mergeSort(example);
    for (auto &e: example) {
        std::cout << e << " ";
    }
    return 0;
}