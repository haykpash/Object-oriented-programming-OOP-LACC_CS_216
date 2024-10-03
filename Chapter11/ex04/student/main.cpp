#include <iostream>
#include <iomanip> 
#include "cylinderType.h" 

using namespace std;

int main() {
    
    cout << fixed << setprecision(2);

    double radius, height, shippingCostPerLiter, paintCostPerSquareFoot;
    const double literConversion = 28.32;

    cout << "Enter the radius of the base of the container (in feet): ";
    cin >> radius;
    cout << "Enter the height of the container (in feet): ";
    cin >> height;

    cylinderType container(radius, height);

    cout << "Enter the shipping cost per liter: ";
    cin >> shippingCostPerLiter;

    double volumeInLiters = container.volume() * literConversion;
    double shippingCost = volumeInLiters * shippingCostPerLiter;
    cout << "Shipping cost: $" << shippingCost << endl;

    cout << "Enter the paint cost per square foot: ";
    cin >> paintCostPerSquareFoot;

    double surfaceAreaInSquareFeet = container.area();
    double paintCost = surfaceAreaInSquareFeet * paintCostPerSquareFoot;
    cout << "Paint cost: $" << paintCost << endl;

    return 0;
}