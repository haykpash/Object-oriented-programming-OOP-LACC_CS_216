#include <iostream>

using namespace std;

// Recursive function to calculate x raised to the power y
double power(int x, int y) {
    // Base case: if y is 0
    if (y == 0) {
        return 1;
    }
    // Base case: if y is 1
    else if (y == 1) {
        return x;
    }
    // If y is negative
    else if (y < 0) {
        return 1 / power(x, -y);
    }
    // Recursive case: if y is positive and greater than 1
    else {
        return x * power(x, y - 1);
    }
}

int main() {
    int x, y;
    cout << "Enter the base number (x): ";
    cin >> x;
    cout << "Enter the exponent (y): ";
    cin >> y;

    // Call the power function and output the result
    double result = power(x, y);
    cout << x << " raised to the power " << y << " is " << result << endl;

    return 0;
}
