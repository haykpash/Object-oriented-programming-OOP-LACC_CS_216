#include "integerManipulation.h"
#include <cmath>

void integerManipulation::setNum(long long n) {
    num = n;
}

long long integerManipulation::getNum() {
    return num;
}

void integerManipulation::reverseNum() {
    long long n = num;
    revNum = 0;
    while (n != 0) {
        revNum = revNum * 10 + n % 10;
        n /= 10;
    }
}

void integerManipulation::classifyDigits() {
    long long n = num;
    evensCount = 0;
    oddsCount = 0;
    zerosCount = 0;

    while (n != 0) {
        int digit = n % 10;
        if (digit == 0) zerosCount++;
        else if (digit % 2 == 0) evensCount++;
        else oddsCount++;
        
        n /= 10;
    }
}

int integerManipulation::getEvensCount() {
    return evensCount;
}

int integerManipulation::getOddsCount() {
    return oddsCount;
}

int integerManipulation::getZerosCount() {
    return zerosCount;
}

int integerManipulation::sumDigits() {
    long long n = num;
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

integerManipulation::integerManipulation(long long n) {
    setNum(n);
    reverseNum();
    classifyDigits();
}
