#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    int x, y;
    cout << "Enter two integers to find their GCD:\n";
    cout << "Enter integer x: ";
    cin >> x;
    cout << "Enter integer y: ";
    cin >> y;

    cout << "The GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;

    return 0;
}
