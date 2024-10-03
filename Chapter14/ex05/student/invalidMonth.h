#ifndef INVALID_MONTH_H
#define INVALID_MONTH_H

#include <exception>

using namespace std;

class invalidMonth : public exception {
public:
    const char* what() const throw() {
        return "Invalid month entered.";
    }
};

#endif 


// string getMonthName(int month) {
//     const string months[] = {"January", "February", "March", "April", "May", "June",
//                                   "July", "August", "September", "October", "November", "December"};
//     if (month < 1 || month > 12) throw invalidMonth();
//     return months[month - 1];
// }