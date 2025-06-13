#include <vector>
#include <iostream>

int binarySearch(std::vector<int> &arr, int value) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int m = (left + right) / 2;
        if (arr.at(m) < value) {
            left = m + 1;
        } else if (arr.at(m) > value) {
            right = m - 1;
        } else {
            return m;
        }
    }
    return -1;
}

int main() {
    std::vector<int> myInput = {0, 1, 2, 3, 4, 13, 14, 15, 16, 17, 18, 19, 20};
    int result = binarySearch(myInput, 13);
    std::cout << result << std::endl;
    return 0;
}