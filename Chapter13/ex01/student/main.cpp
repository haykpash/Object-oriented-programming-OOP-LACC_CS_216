#include <iostream>
#include "rectangleType.h"

using namespace std;

int main()
{
    rectangleType rect1(30, 20), rect2, rect3;
    cout << "Enter the length and width of the rectangle (separated by a space): ";
    cin >> rect2; // Uses the overloaded >> operator to input dimensions.

    // Displaying the dimensions using the overloaded << operator.
    cout << "Rectangle 1: " << rect1 << endl;
    cout << "Rectangle 2: " << rect2 << endl;

    // Testing the overloaded arithmetic operators.
    rect3 = rect1 + rect2;
    cout << "Rectangle 1 + Rectangle 2: " << rect3 << endl;

    rect3 = rect1 - rect2;
    cout << "Rectangle 1 - Rectangle 2: " << rect3 << endl;

    rect3 = rect1 * rect2;
    cout << "Rectangle 1 * Rectangle 2: " << rect3 << endl;

    // Testing the overloaded increment and decrement operators.
    cout << "Pre-incrementing Rectangle 1: " << ++rect1 << endl;
    cout << "Post-incrementing Rectangle 2: " << rect2++ << endl;
    cout << "Rectangle 2 after post-increment: " << rect2 << endl;

    cout << "Pre-decrementing Rectangle 1: " << --rect1 << endl;
    cout << "Post-decrementing Rectangle 2: " << rect2-- << endl;
    cout << "Rectangle 2 after post-decrement: " << rect2 << endl;

    // Testing the overloaded relational operators.
    cout << "Rectangle 1 == Rectangle 2: " << (rect1 == rect2 ? "True" : "False") << endl;
    cout << "Rectangle 1 != Rectangle 2: " << (rect1 != rect2 ? "True" : "False") << endl;
    cout << "Rectangle 1 <= Rectangle 2: " << (rect1 <= rect2 ? "True" : "False") << endl;
    cout << "Rectangle 1 < Rectangle 2: " << (rect1 < rect2 ? "True" : "False") << endl;
    cout << "Rectangle 1 >= Rectangle 2: " << (rect1 >= rect2 ? "True" : "False") << endl;
    cout << "Rectangle 1 > Rectangle 2: " << (rect1 > rect2 ? "True" : "False") << endl;

    return 0;
}
