#include <iostream>
#include "cylinderType.h"

using namespace std;

int main()
{

    cylinderType myCylinder;

    double radius, height;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    myCylinder.setRadius(radius);

    cout << "Enter the height of the cylinder: ";
    cin >> height;
    myCylinder.setHeight(height);

    cout << "Properties of the cylinder:" << endl;
    myCylinder.print();
    cout << endl;

    cout << "The volume of the cylinder is: " << myCylinder.volume() << endl;
    cout << "The surface area of the cylinder is: " << myCylinder.area() << endl;

    return 0;
}

