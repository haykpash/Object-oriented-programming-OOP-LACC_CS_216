#include "rectangleType.h"
#include <cassert>

void rectangleType::setDimension(double l, double w) {
    length = (l >= 0) ? l : 0;
    width = (w >= 0) ? w : 0;
}

double rectangleType::getLength() const { return length; }
double rectangleType::getWidth() const { return width; }
double rectangleType::area() const { return length * width; }
double rectangleType::perimeter() const { return 2 * (length + width); }

rectangleType::rectangleType() : length(0), width(0) {}
rectangleType::rectangleType(double l, double w) { setDimension(l, w); }

ostream& operator<<(ostream& os, const rectangleType& rectangle) {
    os << "Length = " << rectangle.length << "; Width = " << rectangle.width;
    return os;
}

istream& operator>>(istream& is, rectangleType& rectangle) {
    is >> rectangle.length >> rectangle.width;
    rectangle.setDimension(rectangle.length, rectangle.width);
    return is;
}

rectangleType operator+(const rectangleType& r1, const rectangleType& r2) {
    return rectangleType(r1.getLength() + r2.getLength(), r1.getWidth() + r2.getWidth());
}

rectangleType operator-(const rectangleType& r1, const rectangleType& r2) {
    double newLength = r1.getLength() - r2.getLength();
    double newWidth = r1.getWidth() - r2.getWidth();
    assert(newLength >= 0 && newWidth >= 0);
    return rectangleType(newLength, newWidth);
}

rectangleType operator*(const rectangleType& r1, const rectangleType& r2) {
    return rectangleType(r1.getLength() * r2.getLength(), r1.getWidth() * r2.getWidth());
}

rectangleType operator++(rectangleType& rect) {
    rect.setDimension(rect.getLength() + 1, rect.getWidth() + 1);
    return rect;
}


rectangleType operator++(rectangleType& rect, int) {
    rectangleType tempRect = rect;
    rect.setDimension(rect.getLength() + 1, rect.getWidth() + 1);
    return tempRect;
}

rectangleType operator--(rectangleType& rect) {
    assert(rect.getLength() > 0 && rect.getWidth() > 0);
    rect.setDimension(rect.getLength() - 1, rect.getWidth() - 1);
    return rect;
}

rectangleType operator--(rectangleType& rect, int) {
    assert(rect.getLength() > 0 && rect.getWidth() > 0);
    rectangleType tempRect = rect;
    rect.setDimension(rect.getLength() - 1, rect.getWidth() - 1);
    return tempRect;
}

bool operator==(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() == r2.area();
}

bool operator!=(const rectangleType& r1, const rectangleType& r2) {
    return !(r1 == r2);
}

bool operator<=(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() <= r2.area();
}

bool operator<(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() < r2.area();
}

bool operator>=(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() >= r2.area();
}

bool operator>(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() > r2.area();
}

