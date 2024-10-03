
#include <iostream>
#include "fractionType.h" 
 
using namespace std;



fractionType::fractionType(int numerator, int denominator) : a(numerator), b(denominator)
    {
    if (b == 0) {
        cerr << "Denominator cannot be zero. Setting to 1 by default." << endl;
        b = 1;
    }
}

ostream& operator<<(ostream& os, const fractionType& fraction) {
    os << fraction.a << "/" << fraction.b;
    return os;
}

istream& operator>>(istream& is, fractionType& fraction) {
    char slash;
    is >> fraction.a >> slash >> fraction.b;
    if (fraction.b == 0) {
        cerr << "Denominator cannot be zero. Setting to 1 by default." << endl;
        fraction.b = 1;
    }
    return is;
}