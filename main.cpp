#include "prime-number-gen.h"
#include "header/prime-sieve.h"

int main() {
    // generatePrime(50);
    PrimeSieve foo;
    foo.printPrimes();
    foo.sieveVector();
    foo.printPrimes();

    std::vector<int> test{ 1, 2, 3, 4, 5 };
    std::vector<int>::iterator it{ test.begin() };
    it++;
    *it = 11;
    

    for (auto it : test) {
        // std::cout << it << std::endl;
    }
}