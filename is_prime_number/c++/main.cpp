#include <vector>
#include <iostream>

bool isPrime(int x);
std::vector<int> primeList(int x);

int main() {
    int testCase = 25;
    std::vector<int> result = primeList(testCase);
    for (auto el: result) {
        std::cout << el << std::endl;
    }
    return 0;
}

bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
std::vector<int> primeList(int x) {
    std::vector<int> result;
    for (int i = 2; i < x; i++) {
        if (isPrime(i)) {
            result.push_back(i);
        }
    }
    return result;
}
