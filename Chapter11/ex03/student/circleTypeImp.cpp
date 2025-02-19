
//Implementation File for the class circleType
 
#include <iostream>
#include "circleType.h"

using namespace std;

void circleType::print()
{
    cout << "Radius = " << radius
         << ", area = " << area()
         << ", circumference = " << circumference();
} 

void circleType::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}

double circleType::getRadius()
{
    return radius;
}

double circleType::area()
{
    return 3.14159 * radius * radius;
}

double circleType::circumference()
{
    return 2 * 3.14159 * radius;
}

circleType::circleType(double r)
{
    setRadius(r);
}