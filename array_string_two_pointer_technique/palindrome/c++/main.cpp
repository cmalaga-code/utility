#include <iostream>
#include <string>
#include <vector>

bool isPali(std::string x);
bool targetExists(int target, std::vector<int> x);
std::vector<int> returnTwoSorted(std::vector<int> x, std::vector<int> y);

int main() {
    std::cout << std::boolalpha;
	std::cout << isPali("madam") << std::endl;
	std::cout << isPali("what") << std::endl;
    std::vector<int> x {
        1, 20, 30, 40, 44, 47
    };
    std::cout << "Target Exists: " <<  targetExists(50, x) << std::endl;
    std::vector<int> xx {1, 20, 334, 600};
    std::vector<int> y {200, 400, 800};
    std::vector<int> res = returnTwoSorted(xx, y);
    for (auto &u: res) {
        std::cout << u << " ";
    }
    return 0;
}

bool isPali(std::string x) {
    int left = 0;
    int right = x.size() - 1;

    while (left < right) {
        if (x[left] != x[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool targetExists(int target, std::vector<int> x) {
    int left = 0;
    int right = x.size() - 1;

    while (left < right) {
        int currentSum = x[left] + x[right];
        if (currentSum == target) {
            return true;
        }

        if (currentSum > target) {
            right--;
        } else {
            left++;
        }
    } 
    return false;
}

std::vector<int> returnTwoSorted(std::vector<int> x, std::vector<int> y) 
{
    int i = 0;
    int j = 0;

    std::vector<int> result;

    while (i < x.size() && j < y.size()) {
        if (x.at(i) < y.at(j)) {
            result.push_back(x.at(i));
            i++;
        } else {
            result.push_back(y.at(j));
            j++;
        }
    }

    while (i < x.size()) {
        result.push_back(x.at(i));
        i++;
    }

    while (j < y.size()) {
        result.push_back(y.at(j));
        j++;
    }
    return result;
}