#ifndef INVALIDMIN_H
#define INVALIDMIN_H

#include <stdexcept>

using namespace std;

class invalidMin : public runtime_error {
public:
    invalidMin() : runtime_error("Invalid minute entered.") {}
};

#endif
