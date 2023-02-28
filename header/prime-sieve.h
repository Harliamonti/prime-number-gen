#pragma once
#include <iostream>
#include <vector>
#include <iterator>

class PrimeSieve {
private:
    std::vector<unsigned> primes;
    unsigned max;
    unsigned currentNum;            // Multiples we are currently removing ie 3 5 7
    unsigned currentNumToRemove;    // 9 15 21 etc

    void fillVector();
    void removeMultiple();
    void jump();

public:
    PrimeSieve() :max(100), currentNum(3) {
        fillVector();
    }

    void printPrimes();
};
