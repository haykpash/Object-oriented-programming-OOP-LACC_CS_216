#include "primeFactorization.h"
#include <iostream>
#include <limits>


using namespace std;


int main() {
    long long number;
    cout << "Enter an integer between 2 and 270,000,000,000,000: ";
    cin >> number;

    if (number < 2 || number > 270000000000000 || cin.fail()) {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number within the specified range." << endl;
        return 1;
    }

    primeFactorization primeObj(number);
    if (primeObj.isPrime(number)) {
        cout << number << " is a prime number. Its factorization is:\n";
        cout << number << " = " << number << endl;
    } else {
        cout << "The factorization of " << number << " is: ";
        primeObj.factorization();
    }

    return 0;
}
