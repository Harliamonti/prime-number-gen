#include <iostream>
#include <vector>
#include <type_traits>
#include <concepts>

bool isDivisible(const int num1, const int num2);
bool isPrime(std::vector<int> &vec, const int num);
template <typename T>
bool isValidInput(T input);
std::vector<int> generatePrime(int maxNum);

int main() {
    
}

bool isDivisible(const int num1, const int num2) {
    return num1 % num2 ? false : true;
}

bool isPrime(std::vector<int> &vec, const int num) {
    for (auto &prime : vec) {
        if (isDivisible(num, prime)) { return false;}
    }
    return true;
}

template <typename T>
bool isValidInput(T input) {
    return std::integral<T>;
}

std::vector<int> generatePrime(int max) {
    std::vector<int> primes{ 2, 3 };
    int current{ 5 };

    while (current <= max) {
        if (isPrime(primes, current)) {
            primes.push_back(current);
            current += 2;
        }
        else current += 2;
    }

    return primes;
}

//change int to unsigned as we dont care about negative numbers