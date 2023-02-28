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

void PrimeSieve::resetIterator() {
    iter = primes.begin();
}

void PrimeSieve::jump() {
    for (size_t i{}; i < *currentNum; i++) 
    {
        if (iter == primes.end()) break;
        iter++;
    }
}

void PrimeSieve::removeMultipleOfCurrentNum() {
    jump();
    while (iter != primes.end()) {
        *iter = 0;
        jump();
    }
    resetIterator();
}

void PrimeSieve::sieveVector() {
    while (currentNum != primes.end()) { 
        if (*currentNum == 0) {
            ++currentNum;
        }
        else {
            removeMultipleOfCurrentNum();
            ++currentNum;
        }
    }
}
