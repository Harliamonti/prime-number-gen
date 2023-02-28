#pragma once
#include <iostream>
#include <vector>

class PrimeSieve {
private:
    std::vector<unsigned> primes;
    unsigned max;
    unsigned current;
    void fillVector();

public:
    PrimeSieve() :max(100), current(3) {
        fillVector();
    }

    void printPrimes();
};
