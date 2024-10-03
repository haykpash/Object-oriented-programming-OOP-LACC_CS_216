#include <iostream>

using namespace std;

#include <iostream>
#include <iomanip>
#include "complexType.h"

int main() {
    complexType num1(3, 4), num2(1, -2), result;

    cout << fixed << setprecision(2);

    // Testing addition
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    // Testing subtraction
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    // Testing multiplication
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    // Testing division
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    // Testing equality
    bool isEqual = num1 == num2;
    cout << num1 << " is " << (isEqual ? "" : "not ") << "equal to " << num2 << endl;

    return 0;
}
