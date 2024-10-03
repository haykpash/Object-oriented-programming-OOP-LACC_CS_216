#ifndef DIVISIONBYZERO_H
#define DIVISIONBYZERO_H

#include <stdexcept>

using namespace std;

class DivisionByZero : public runtime_error {
public:
    DivisionByZero() : runtime_error("Division by zero") {}
};

#endif
