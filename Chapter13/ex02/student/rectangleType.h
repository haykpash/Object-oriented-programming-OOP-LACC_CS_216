#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>
using namespace std;

class rectangleType {

    friend rectangleType operator++(const rectangleType& one);
    friend rectangleType operator--(const rectangleType& one);

public:

    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;

    // Constructors
    rectangleType();
    rectangleType(double l, double w);

private:
    double length;
    double width;

    // Stream operators as friends
    friend ostream& operator<<(ostream&, const rectangleType&);
    friend istream& operator>>(istream&, rectangleType&);
};

// Nonmember operator declarations
rectangleType operator+(const rectangleType&, const rectangleType&);
rectangleType operator-(const rectangleType&, const rectangleType&);
rectangleType operator*(const rectangleType&, const rectangleType&);
rectangleType operator++(rectangleType&);
rectangleType operator++(rectangleType&, int);
rectangleType operator--(rectangleType&);
rectangleType operator--(rectangleType&, int);
bool operator==(const rectangleType&, const rectangleType&);
bool operator!=(const rectangleType&, const rectangleType&);
bool operator<=(const rectangleType&, const rectangleType&);
bool operator<(const rectangleType&, const rectangleType&);
bool operator>=(const rectangleType&, const rectangleType&);
bool operator>(const rectangleType&, const rectangleType&);

#endif
