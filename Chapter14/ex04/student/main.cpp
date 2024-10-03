#include <iostream>
#include <string>
#include "invalidHr.h"
#include "invalidMin.h"
#include "invalidSec.h"

using namespace std;

int getValidatedTimeComponent(const string& prompt, int max_value, const runtime_error& ex);

int main() {
    try {
        int hour = getValidatedTimeComponent("Enter hours (1-12): ", 12, invalidHr());
        int minute = getValidatedTimeComponent("Enter minutes (0-59): ", 59, invalidMin());
        int second = getValidatedTimeComponent("Enter seconds (0-59): ", 59, invalidSec());

        string am_pm;
        cout << "Enter AM or PM: ";
        cin >> am_pm;

        if (am_pm != "AM" && am_pm != "PM") {
            throw runtime_error("Invalid AM/PM value entered.");
        }

        if (am_pm == "PM" && hour != 12) {
            hour += 12;
        } else if (am_pm == "AM" && hour == 12) {
            hour = 0;
        }

        cout << "24-hour time: " << hour << ":" << minute << ":" << second << endl;
    } catch (const runtime_error& ex) {
        cout << ex.what() << endl;
    }

    return 0;
}

int getValidatedTimeComponent(const string& prompt, int max_value, const runtime_error& ex) {
    int value;
    cout << prompt;
    cin >> value;
    if (cin.fail() || value < 0 || value > max_value) {
        cin.clear();
        throw ex;
    }
    return value;
}
