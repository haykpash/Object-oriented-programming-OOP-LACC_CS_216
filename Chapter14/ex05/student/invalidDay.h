#ifndef INVALID_DAY_H
#define INVALID_DAY_H

#include <exception>

using namespace std;

class invalidDay : public exception {
public:
    const char* what() const throw() {
        return "Invalid day entered.";
    }
};

#endif 

// bool isLeapYear(int year) {
//     return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
// }

// int getMaxDay(int month, int year) {
//     switch (month) {
//         case 2: 
//             return isLeapYear(year) ? 29 : 28;
//         case 4: case 6: case 9: case 11: 
//             return 30;
//         default:
//             return 31;
//     }
// }