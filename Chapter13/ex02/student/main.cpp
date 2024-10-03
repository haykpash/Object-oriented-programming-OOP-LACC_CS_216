#include <iostream>
#include "rectangleType.h"

using namespace std;

int main() {
    rectangleType rect1(30, 20), rect2, rect3;
    // cout << "Enter the length and width of the rectangle (separated by a space): ";
    // cin >> rect2;

    cout << "Rectangle 1: " << rect1 << endl;
    cout << "Rectangle 2: " << rect2 << endl;

    rect3 = rect1 + rect2;
    cout << "Rectangle 1 + Rectangle 2: " << rect3 << endl;

    rect3 = rect1 - rect2;
    cout << "Rectangle 1 - Rectangle 2: " << rect3 << endl;

    rect3 = rect1 * rect2;
    cout << "Rectangle 1 * Rectangle 2: " << rect3 << endl;

    ++rect1;
    cout << "Pre-incrementing Rectangle 1: " << rect1 << endl;
    cout << "rectangleType operator++" << endl;
    rect2++;
    cout << "Post-incrementing Rectangle 2: " << rect2 << endl;

    --rect1;
    cout << "Pre-decrementing Rectangle 1: " << rect1 << endl;

    rect2--;
    cout << "Post-decrementing Rectangle 2: " << rect2 << endl;

    cout << "Rectangle 1 == Rectangle 2: " << (rect1 == rect2 ? "True" : "False") << endl;

    return 0;
}
