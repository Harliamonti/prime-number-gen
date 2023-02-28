#pragma once
#include <iostream>
#include <vector>
#include <iterator>

class PrimeSieve {
private:
    std::vector<unsigned> primes;
    std::vector<unsigned>::iterator iter;   // Where the iterator is currently
    unsigned max;
    std::vector<unsigned>::iterator currentNum;
    unsigned count;
    //unsigned currentNum;                    // Multiples we are currently removing ie 3 5 7

    void fillVector();
    void removeMultipleOfCurrentNum();      // Removes all multiples of whatever currentNum is rn
    void jump();                            // Performs an iterative jump of magnitude CurrentNum
    void resetIterator();
    void incrementCurrentNum();

public:
    PrimeSieve() :max(1000'00), count() {
        fillVector();
        iter = primes.begin();
        currentNum = primes.begin();
    }

    void printPrimes();
    void printLastPrimes(unsigned amount);
    void sieveVector();

};
