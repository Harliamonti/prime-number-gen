#include <iostream>
#include <vector>

bool isDivisible(const int num1, const int num2);
bool isPrime(std::vector<int> &vec, const int num);

int main() {

    std::vector<int> primes{ 2, 3 };
    int max{ 50 }; //User defined
    int current{ 5 };

    while (current <= max) {

        if (isPrime(primes, current)) {
            primes.push_back(current);
            current += 2;
        }
        else current += 2;

    }
        
    for (const auto& it : primes)
    {
        std::cout << it << std::endl;
    }
}

bool isDivisible(const int num1, const int num2) {
    return num1 % num2 ? false : true;
}

bool isPrime(std::vector<int> &vec, const int num) {
    for (auto &prime : vec) {
        if (isDivisible(num, prime)) {
            return false;
        }
    }
    return true;
}