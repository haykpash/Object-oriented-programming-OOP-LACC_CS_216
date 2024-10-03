// #include "savingsAccount.h"
// #include <iostream>
// #include <iomanip>

// using namespace std;

// savingsAccount::savingsAccount(int acctNumber, double bal, double intRate)
//     : bankAccount(acctNumber, bal), interestRate(intRate) {}

// void savingsAccount::setInterestRate(double intRate) {
//     interestRate = intRate;
// }

// double savingsAccount::getInterestRate() const {
//     return interestRate;
// }

// void savingsAccount::postInterest() {
//     balance += balance * (interestRate / 100);
// }

// void savingsAccount::print() const {
//     bankAccount::print();
//     cout << "Interest Rate: " << interestRate << endl;
// }

// void savingsAccount::withdraw(double amount) {
//     if ((amount > 0) && (amount <= getBalance())) {
//         balance -= amount; 
//     } else {
//         cout << "Cannot withdraw: Insufficient funds or invalid amount." << endl;
//     }
// }
