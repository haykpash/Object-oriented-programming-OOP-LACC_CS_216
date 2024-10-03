// #include "checkingAccount.h"
// #include <iostream>
// #include <iomanip>

// using namespace std;

// checkingAccount::checkingAccount(int acctNumber, double bal, double minBal, double intRate, double servChg)
//     : bankAccount(acctNumber, bal), minimumBalance(minBal), interestRate(intRate), serviceCharge(servChg) {}

// void checkingAccount::setMinimumBalance(double minBal) {
//     minimumBalance = minBal;
// }

// double checkingAccount::getMinimumBalance() const {
//     return minimumBalance;
// }

// void checkingAccount::setInterestRate(double intRate) {
//     interestRate = intRate;
// }

// double checkingAccount::getInterestRate() const {
//     return interestRate;
// }

// void checkingAccount::setServiceCharge(double servChg) {
//     serviceCharge = servChg;
// }

// double checkingAccount::getServiceCharge() const {
//     return serviceCharge;
// }

// void checkingAccount::postInterest() {
//     balance += balance * (interestRate / 100);
// }

// void checkingAccount::withdraw(double amount) {
//     if ((balance - amount) < minimumBalance) {
//         balance -= serviceCharge;
//         cout << "Service charge of " << serviceCharge << " applied." << endl;
//     }
//     return bankAccount::withdraw(amount);
// }

// void checkingAccount::print() const {
//     bankAccount::print();
//     cout << "Interest Rate: " << interestRate << endl;
//     cout << "Minimum Balance: " << minimumBalance << endl;
//     cout << "Service Charge: " << serviceCharge << endl;
// }


// void checkingAccount::writeCheck(double amount) {
//     if ((balance - amount) >= minimumBalance) {
//         balance -= amount;
//         cout << "Check written for " << amount << ". New balance: " << balance << endl;
//     } else {
//         cout << "Insufficient funds to write a check for " << amount << endl;
//     }
// }

// bool checkingAccount::verifyMinimumumBalance(double amount) {
//     return (balance - amount) >= minimumBalance;
// }








// #include "checkingAccount.h"
// #include <iostream>

// using namespace std;

// // Constructor with default values for the interest rate, minimum balance, and service charge
// checkingAccount::checkingAccount(int acctNumber, double bal, 
//                                  double minBal, double intRate, 
//                                  double servC)
//     : bankAccount(acctNumber, bal), minimumBalance(minBal), 
//       interestRate(intRate), serviceCharge(servC) {
// }

// // Setters and Getters for minimum balance
// double checkingAccount::getMinimumBalance() const {
//     return minimumBalance;
// }

// void checkingAccount::setMinimumBalance(double minBal) {
//     minimumBalance = minBal;
// }

// // Setters and Getters for interest rate
// double checkingAccount::getInterestRate() const {
//     return interestRate;
// }

// void checkingAccount::setInterestRate(double intRate) {
//     interestRate = intRate;
// }

// // Setters and Getters for service charge
// double checkingAccount::getServiceCharge() const {
//     return serviceCharge;
// }

// void checkingAccount::setServiceCharge(double servC) {
//     serviceCharge = servC;
// }

// void checkingAccount::postInterest() {
//     double currentBalance = getBalance(); // Use getter method
//     if (currentBalance > 0) {
//         // Assuming interestRate is a percentage
//         currentBalance += currentBalance * interestRate;
//         deposit(currentBalance - getBalance()); // Use deposit to update balance
//     }
// }

// bool checkingAccount::verifyMinimumumBalance(double amount) {
//     double currentBalance = getBalance(); // Use getter method
//     // Check if the balance will stay above the minimum after the transaction
//     return (currentBalance - amount) >= minimumBalance;
// }

// void checkingAccount::writeCheck(double amount) {
//     double currentBalance = getBalance(); // Use getter method
//     if (amount <= currentBalance) {
//         if (currentBalance - amount < minimumBalance) {
//             cout << "Balance below minimum. Service charge will be applied." << endl;
//             currentBalance -= (amount + serviceCharge);
//         } else {
//             currentBalance -= amount;
//         }
//         deposit(currentBalance - getBalance()); // Use deposit to update balance
//         cout << "Check written for: $" << amount << endl;
//     } else {
//         cout << "Insufficient funds to write check for $" << amount << endl;
//     }
// }

// void checkingAccount::withdraw(double amount) {
//     double currentBalance = getBalance(); // Use getter method
//     if (amount > 0 && amount <= currentBalance) {
//         currentBalance -= amount;
//         deposit(currentBalance - getBalance()); // Use deposit to update balance
//         cout << "Withdrawn: $" << amount << endl;
//         if (currentBalance < minimumBalance) {
//             cout << "Balance falls below minimum after withdrawal. Service charge applied." << endl;
//             currentBalance -= serviceCharge;
//             deposit(currentBalance - getBalance()); // Adjust the balance after service charge
//         }
//     } else if (amount <= 0) {
//         cout << "Withdrawal amount must be positive." << endl;
//     } else {
//         cout << "Not enough funds to withdraw " << amount << endl;
//     }
// }


// // Print account information, including the new details specific to checking accounts
// void checkingAccount::print() const {
//     bankAccount::print(); // Call base class method to print account number and balance
//     cout << "Interest Rate (%): " << interestRate * 100 << endl;
//     cout << "Minimum Balance: $" << minimumBalance << endl;
//     cout << "Service Charge: $" << serviceCharge << endl;
// }
