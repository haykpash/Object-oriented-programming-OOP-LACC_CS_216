#include "dayType.h"
#include <iostream>

// using namespace std;

string dayType::weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

dayType::dayType() {
    weekDay = "Sunday";
}
dayType::dayType(string d) {
    weekDay = d;
}
void dayType::print() const {
    cout << weekDay << endl;
}
string dayType::nextDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            return weekDays[(i + 1) % 7];
        }
    }
    return ""; 
}
string dayType::prevDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            return weekDays[(i + 6) % 7];
        }
    }
    return "";
}
void dayType::addDay(int nDays) {
    int currentDayIndex = 0;
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            currentDayIndex = i;
            break;
        }
    }
    weekDay = weekDays[(currentDayIndex + nDays) % 7];
}
void dayType::setDay(string d) {
    weekDay = d;
}
string dayType::getDay() const {
    return weekDay;
}
