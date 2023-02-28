#include "header/prime-sieve.h"

void PrimeSieve::fillVector() {
    unsigned startNum{ 3 };
    while(startNum < max) {
        primes.push_back(startNum);
        startNum += 2;
    }
}

void PrimeSieve::printPrimes() {
    for (const auto &it : primes) {
        std::cout << it << std::endl;
    }
}

void PrimeSieve::jump() {
    for (size_t i{}; i < currentNum; i++) iter++;
}


