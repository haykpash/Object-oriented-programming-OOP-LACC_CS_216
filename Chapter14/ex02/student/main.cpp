#include <iostream>
#include <iomanip>
#include <limits> 
#include "divisionByZero.h"

using namespace std;

int main() { 
    int num1, num2;
    char opr;

    try {
        cout << "Enter two integers: ";
        if (!(cin >> num1 >> num2)) {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            throw invalid_argument("Invalid input. Expected two integers.");
        }

        cout << "Enter operator: + (addition), - (subtraction), * (multiplication), / (division): ";
        cin >> opr;
        cout << num1 << " " << opr << " " << num2 << " = ";

        switch (opr) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) throw DivisionByZero();
            cout << static_cast<double>(num1) / num2 << endl; 
            break;
        default:
            throw invalid_argument("Illegal operation.");
        }
    } catch (const DivisionByZero& e) {
        cout << e.what() << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}
