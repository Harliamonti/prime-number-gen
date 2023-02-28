#include <iostream>
#include <vector>
#include <type_traits>
#include <concepts>

bool isDivisible(const int &num1, const int &num2);
bool isPrime(std::vector<int> &vec, const int &num);
bool isTooHigh(const int &num1, const int &num2);
std::vector<int> generatePrime(int maxNum);

int main() {
    generatePrime(50);
}

bool isDivisible(const int &num1, const int &num2) {
    return num1 % num2 ? false : true;
}

bool isTooHigh(const int &num1, const int &num2) {
    if (num2 <= (num1 / num2)) return false;
    else return true;
}

bool isPrime(std::vector<int> &vec, const int &num) {
    for (auto &prime : vec) {
        if (isTooHigh(num, prime)) return true;
        else if (isDivisible(num, prime)) return false;
    }
    return true;
}

std::vector<int> generatePrime(int max) {
    std::vector<int> primes{ 3, 5, 7, 11 };
    int current{ 13 };

    while (current <= max) {
        if (isPrime(primes, current)) {
            primes.push_back(current);
            current += 2;
        }
        else current += 2;
    }

    for (size_t i{1}; i <= 10; i++) {
        std::cout << *(primes.end() - i) << std::endl;
    }

    // for (auto it : primes) {
    //     std::cout << it << std::endl;
    // }

    return primes;
}

//change int to unsigned as we dont care about negative numbers