#include <iostream>
#include "dayType.h"

using namespace std;

int main() {
    dayType today("Monday");

    cout << "Today is: ";
    today.print();

    cout << "The next day is: " << today.nextDay() << endl;
    cout << "The previous day is: " << today.prevDay() << endl;

    today.addDay(5);
    cout << "After adding 5 days, the day is: ";
    today.print();

    return 0;
}

