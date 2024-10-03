#include "complexType.h"

using namespace std;

complexType::complexType(double real, double imag) : realPart(real), imaginaryPart(imag) {}

void complexType::getComplex(double& real, double& imag) const {
    real = realPart;
    imag = imaginaryPart;
}

// Non-member functions implementation
ostream& operator<<(ostream& os, const complexType& complex) {
    double real, imag;
    complex.getComplex(real, imag);
    os << "(" << real << ", " << imag << ")";
    return os;
}

istream& operator>>(istream& is, complexType& complex) {
    double real, imag;
    is >> real >> imag;
    complex = complexType(real, imag);
    return is;
}

complexType operator+(const complexType& c1, const complexType& c2) {
    double real1, imag1, real2, imag2;
    c1.getComplex(real1, imag1);
    c2.getComplex(real2, imag2);
    return complexType(real1 + real2, imag1 + imag2);
}

complexType operator-(const complexType& c1, const complexType& c2) {
    double real1, imag1, real2, imag2;
    c1.getComplex(real1, imag1);
    c2.getComplex(real2, imag2);
    return complexType(real1 - real2, imag1 - imag2);
}

complexType operator*(const complexType& c1, const complexType& c2) {
    double real1, imag1, real2, imag2;
    c1.getComplex(real1, imag1);
    c2.getComplex(real2, imag2);
    return complexType(real1 * real2 - imag1 * imag2, real1 * imag2 + imag1 * real2);
}

complexType operator/(const complexType& c1, const complexType& c2) {
    double real1, imag1, real2, imag2, denominator;
    c1.getComplex(real1, imag1);
    c2.getComplex(real2, imag2);
    denominator = real2 * real2 + imag2 * imag2;
    if (denominator == 0) {
        cerr << "Attempted to divide by zero" << endl;
        return complexType();
    }
    return complexType((real1 * real2 + imag1 * imag2) / denominator, (imag1 * real2 - real1 * imag2) / denominator);
}

bool operator==(const complexType& c1, const complexType& c2) {
    double real1, imag1, real2, imag2;
    c1.getComplex(real1, imag1);
    c2.getComplex(real2, imag2);
    return (real1 == real2) && (imag1 == imag2);
}
