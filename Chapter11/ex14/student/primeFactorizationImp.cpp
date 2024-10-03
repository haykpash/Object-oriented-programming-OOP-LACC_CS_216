#include "primeFactorization.h"
#include <iostream>

primeFactorization::primeFactorization(long long n) : integerManipulation(n) {
    // The constructor has been moved to integerManipulationImp.cpp
    // and will automatically be called when an object of primeFactorization is created.
}

// void primeFactorization::factorization() {
//     // The factorization function has been implemented in the earlier response.
// }


void primeFactorization::factorization() {
    // long long n = num;
    long long n = getNum();
    std::cout << "The factorization of (not|non) " << n << " ";

    // Handle the factor of 2 separately to make the loop faster
    while (n % 2 == 0) {
        std::cout << "2 ";
        n /= 2;
    }

    // Check for remaining odd factors starting from 3
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            std::cout << i << " ";
            n /= i;
        }
    }

    // If n is still greater than 2, it's a prime factor
    if (n > 2)
        std::cout << n << " ";

    std::cout << std::endl;
}

bool primeFactorization::isPrime(long long number) {
    if (number <= 1) return false;
    if (number <= 3) return true;

    if (number % 2 == 0 || number % 3 == 0) return false;

    for (long long i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    
    return true;
}



