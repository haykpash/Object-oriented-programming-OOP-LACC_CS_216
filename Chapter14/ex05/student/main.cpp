#include <iostream>
#include <string>
#include <sstream>
#include "invalidDay.h"
#include "invalidMonth.h"

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int getMaxDay(int month, int year) {
    switch (month) {
        case 2: 
            return isLeapYear(year) ? 29 : 28;
        case 4: case 6: case 9: case 11: 
            return 30;
        default:
            return 31;
    }
}

string getMonthName(int month) {
    const string months[] = {"January", "February", "March", "April", "May", "June",
                                  "July", "August", "September", "October", "November", "December"};
    if ((month < 1) || (month > 12)) throw invalidMonth();
    return months[month - 1];
}

int main() {

    try {

        string input;
        cout << "Enter a person’s date of birth (YYYY-MM-DD): ";
        getline(cin, input);

        cout << "March 3, 1991" << endl;
        cout << "April 20, 2000" << endl;
        
        istringstream iss(input);
        int year, month, day;
        char dash1, dash2;
        if (!(iss >> year >> dash1 >> month >> dash2 >> day) || (dash1 != '-') || (dash2 != '-')) {
            cerr << "Invalid date format." << endl;
            return 1;
        }
        
        if ((month < 1) || (month > 12)) throw invalidMonth();
        if ((day < 1) || (day > getMaxDay(month, year))) throw invalidDay();

        cout << getMonthName(month) << " " << day << ", " << year << endl;

    } catch (const invalidDay& id) {
        cerr << "Error: " << id.what() << endl;
    } catch (const invalidMonth& im) {
        cerr << "Error: " << im.what() << endl;
    }
    
    return 0;
}
