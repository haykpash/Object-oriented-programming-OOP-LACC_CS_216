#ifndef INVALIDSEC_H
#define INVALIDSEC_H

#include <stdexcept>

using namespace std;

class invalidSec : public runtime_error {
public:
    invalidSec() : runtime_error("Invalid second entered.") {}
};

#endif
