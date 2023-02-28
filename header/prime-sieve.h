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
    //unsigned currentNum;                    // Multiples we are currently removing ie 3 5 7
    unsigned currentNumToRemove;            // 9 15 21 etc

    void fillVector();
    void removeMultipleOfCurrentNum();      // Removes all multiples of whatever currentNum is rn
    void jump();                            // Performs an iterative jump of magnitude CurrentNum
    void resetIterator();
    void incrementCurrentNum();

public:
    PrimeSieve() :max(100) {
        fillVector();
        iter = primes.begin();
        currentNum = primes.begin();
    }

    void printPrimes();
    void sieveVector();

};
