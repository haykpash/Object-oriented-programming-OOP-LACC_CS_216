#include <iostream>

using namespace std;

#include "fractionType.h" 

int main() {
    fractionType x, y, z;
    cout << "Enter fraction x (a/b format): ";
    cin >> x;
    cout << "Enter fraction y (a/b format): ";
    cin >> y;

    z = x + y;

    cout << "x + y = " << z << endl;

    return 0;
}
