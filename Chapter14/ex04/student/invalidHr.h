#ifndef INVALIDHR_H
#define INVALIDHR_H

#include <stdexcept>

using namespace std;

class invalidHr : public runtime_error {
public:
    invalidHr() : runtime_error("Invalid hour entered.") {}
};

#endif
