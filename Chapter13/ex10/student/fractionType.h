#ifndef H_fractionType
#define H_fractionType

using namespace std;

#include <iostream> 

class fractionType {
public:
    // Constructors
    fractionType(int numerator = 0, int denominator = 1); 

    // Overloaded arithmetic operators
    fractionType operator+(const fractionType& right) const {
        return fractionType(a * right.b + b * right.a, b * right.b);
    }

    fractionType operator-(const fractionType& right) const {
        return fractionType(a * right.b - b * right.a, b * right.b);
    }

    fractionType operator*(const fractionType& right) const {
        return fractionType(a * right.a, b * right.b);
    }

    fractionType operator/(const fractionType& right) const {
        return fractionType(a * right.b, b * right.a);
    }

    // Overloaded relational operators
    bool operator==(const fractionType& right) const {
        return a * right.b == b * right.a;
    }

    bool operator!=(const fractionType& right) const {
        return a * right.b != b * right.a;
    }

    bool operator<(const fractionType& right) const {
        return a * right.b < b * right.a;
    }

    bool operator<=(const fractionType& right) const {
        return a * right.b <= b * right.a;
    }

    bool operator>(const fractionType& right) const {
        return a * right.b > b * right.a;
    }

    bool operator>=(const fractionType& right) const {
        return a * right.b >= b * right.a;
    }

    // Overloaded stream insertion and extraction operators
    friend ostream& operator<<(ostream& os, const fractionType& fraction);
    friend istream& operator>>(istream& is, fractionType& fraction);

private:
    int a; // Numerator
    int b; // Denominator
};

#endif