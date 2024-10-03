#include <iostream>

using namespace std;

// Function to convert a single digit to its hexadecimal representation
char hexChar(int digit) {
    if (digit >= 0 && digit <= 9) {
        return '0' + digit;
    }
    return 'A' + (digit - 10);
}

// Recursive function to convert decimal to base b (8 or 16)
string convertToBase(int decimal, int base) {
    if (decimal == 0) {
        return "";
    } else {
        return convertToBase(decimal / base, base) + hexChar(decimal % base);
    }
}

int main() {
    int number, base;
    cout << "Enter a positive decimal number: ";
    cin >> number;
    cout << "Enter 8 for octal conversion or 16 for hexadecimal conversion: ";
    cin >> base;
    
    if (base != 8 && base != 16) {
        cout << "Invalid base. Please enter 8 or 16." << endl;
        return 1; // Exit with an error code
    }

    string converted = convertToBase(number, base);
    if (converted.empty()) {
        converted = "0"; // Handle the case for 0
    }
    cout << "The decimal number " << number << " in base " << base << " is: " << converted << endl;
    
    return 0;
}
