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

void PrimeSieve::printLastPrimes(unsigned amount) {
    auto it{ primes.end() };
    --it;
    for (size_t i{}; i < amount; ++i) {
        if (*it == 0)
        {
            --i;
            --it;
        }
        else {
            std::cout << *it << std::endl;
            --it;
        }
        
    }
}

//needs to reset to 5 7 etc
void PrimeSieve::resetIterator() {   // currently always resets to 3
    iter = currentNum;                  
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
}

void PrimeSieve::sieveVector() {
    while (currentNum != primes.end()) {
        resetIterator();

        if (*currentNum == 0) {
            ++currentNum;
        }
        else {
            removeMultipleOfCurrentNum();
            ++currentNum;
        }

        if (isTooHigh()) break;
    }
}

bool PrimeSieve::isTooHigh() {
    if( *currentNum * (*currentNum) > max) return true;
    return false;
}
