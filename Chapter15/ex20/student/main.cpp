#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Recursive function to find the square root of x using Newton's method
double sqrtNewton(double x, double a, double epsilon) {
    if (abs(a * a - x) <= epsilon) {
        // If the guess is within the tolerance, we have found our approximate square root
        return a;
    } else {
        // Otherwise, make a new guess and recurse
        double newGuess = (a * a + x) / (2 * a);
        return sqrtNewton(x, newGuess, epsilon);
    }
}

int main() {
    double number, tolerance;
    
    cout << "Enter a nonnegative real number: ";
    cin >> number;
    cout << "Enter the tolerance for the square root approximation: ";
    cin >> tolerance;
    
    double squareRoot = sqrtNewton(number, number, tolerance);
    cout << fixed << setprecision(2);
    cout << "The square root of " << number << " within the tolerance " << tolerance << " is " << squareRoot << endl;
    
    return 0;
}
