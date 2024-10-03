#include "bankAccount.h"

using namespace std;

int bankAccount::nextAccountNumber = 1100;

bankAccount::bankAccount(string accHolderName, string accType, double bal, double intRate)
    : accountHolderName(accHolderName), accountType(accType), balance(bal), interestRate(intRate/100) {
    accountNumber = getNewAccountNumber();
}

void bankAccount::deposit(double amount) {
    balance += amount;
}

void bankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    }
}

void bankAccount::addInterest() {
    balance += (balance * interestRate);
}

int bankAccount::getNewAccountNumber() {
    return nextAccountNumber++;
}

string bankAccount::getAccountHolderName() const {
    return accountHolderName;
}

int bankAccount::getAccountNumber() const {
    return accountNumber;
}

string bankAccount::getAccountType() const {
    return accountType;
}

double bankAccount::getBalance() const {
    return balance;
}

double bankAccount::getInterestRate() const {
    return interestRate * 100;
}
