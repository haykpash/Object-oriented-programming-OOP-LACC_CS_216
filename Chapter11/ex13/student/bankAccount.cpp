// #include "bankAccount.h"
// #include <iostream>
// #include <iomanip>

// using namespace std;

// bankAccount::bankAccount(int acctNumber, double bal)
//     : accountNumber(acctNumber), balance(bal) {}

// void bankAccount::setAccountNumber(int acctNumber) {
//     accountNumber = acctNumber;
// }

// int bankAccount::getAccountNumber() const {
//     return accountNumber;
// }

// double bankAccount::getBalance() const {
//     return balance;
// }

// void bankAccount::deposit(double amount) {
//     if (amount > 0) {
//         balance += amount;
//     } else {
//         cout << "Invalid deposit amount." << endl;
//     }
// }

// void bankAccount::withdraw(double amount) {
//     if ((amount > 0) && (amount <= balance)) {
//         balance -= amount;
//     } else {
//         cout << "Insufficient funds or invalid withdrawal amount." << endl;
//     }
// }

// void bankAccount::print() const {
//     cout << fixed << setprecision(2);
//     cout << "Account Number: " << accountNumber << endl;
//     cout << "Balance: " << balance << endl;
// }


// #include "bankAccount.h"
// #include <iostream>
// using namespace std;

// // Constructor
// bankAccount::bankAccount(int acctNumber, double bal) {
//     accountNumber = acctNumber;
//     balance = bal;
// }

// // Set the account number
// void bankAccount::setAccountNumber(int acct) {
//     accountNumber = acct;
// }

// // Get the account number
// int bankAccount::getAccountNumber() const {
//     return accountNumber;
// }

// // Get the balance
// double bankAccount::getBalance() const {
//     return balance;
// }

// // Withdraw money
// void bankAccount::withdraw(double amount) {
//     if (amount > balance) {
//         cout << "Insufficient funds." << endl;
//     } else {
//         balance -= amount;
//     }
// }

// // Deposit money
// void bankAccount::deposit(double amount) {
//     balance += amount;
// }

// // Print account information
// void bankAccount::print() const {
//     cout << "Account Number: " << accountNumber << endl;
//     cout << "Balance: $" << balance << endl;
// }


//  bankAccount.cpp

#include "bankAccount.h"
#include <iostream>
using namespace std;

bankAccount::bankAccount(int acctNumber, double bal) : accountNumber(acctNumber), balance(bal) {}

void bankAccount::setAccountNumber(int acct) {
    accountNumber = acct;
}

int bankAccount::getAccountNumber() const {
    return accountNumber;
}

double bankAccount::getBalance() const {
    return balance;
}

void bankAccount::deposit(double amount) {
    if (amount < 0) {
        cout << "Deposit amount cannot be negative." << endl;
    } else {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
}

void bankAccount::withdraw(double amount) {
    if (amount < 0) {
        cout << "Withdrawal amount cannot be negative." << endl;
    } else if (amount > balance) {
        cout << "Insufficient funds." << endl;
    } else {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }
}

void bankAccount::print() const {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
}

