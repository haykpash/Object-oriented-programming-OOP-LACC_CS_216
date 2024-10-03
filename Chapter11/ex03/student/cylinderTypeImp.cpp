#include <iostream>
#include "cylinderType.h"

using namespace std;

void cylinderType::print()
{
    circleType::print();
    cout << ", height = " << height
         << ", volume = " << volume()
         << ", surface area = " << area();
}

void cylinderType::setHeight(double h)
{
    if (h >= 0)
        height = h;
    else
        height = 0;
}

double cylinderType::getHeight()
{
    return height;
}

double cylinderType::volume()
{
    return circleType::area() * height;
}

double cylinderType::area()
{
    return circleType::circumference() * height + 2 * circleType::area();
    
}

cylinderType::cylinderType(double r, double h) : circleType(r), height(h)
{
    setHeight(h);
}
