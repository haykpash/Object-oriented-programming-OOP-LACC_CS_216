#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

using namespace std;

#include <string>

class bankAccount {
public:
    bankAccount(string accHolderName, string accType, double bal, double intRate);
    
    // Member functions
    void deposit(double amount);
    void withdraw(double amount);
    void addInterest();
    static int getNewAccountNumber();
    
    // Accessor functions
    string getAccountHolderName() const;
    int getAccountNumber() const;
    string getAccountType() const;
    double getBalance() const;
    double getInterestRate() const;
    
private:
    string accountHolderName;
    int accountNumber;
    string accountType;
    double balance;
    double interestRate;
    static int nextAccountNumber;
};

#endif
