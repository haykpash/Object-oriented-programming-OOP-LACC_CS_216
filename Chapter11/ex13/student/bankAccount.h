
//Class bankAccount
  
#ifndef H_bankAccount 
#define H_bankAccount

class bankAccount
{
public:
    void setAccountNumber(int acct);
    int getAccountNumber() const;
    double getBalance() const; 
    void withdraw(double amount);
    void deposit(double amount);
    void print() const;
    bankAccount(int acctNumber = -1, double bal = 0);

protected:
    int accountNumber;
    double balance;
};

#endif


// #ifndef BANKACCOUNT_H
// #define BANKACCOUNT_H


// Class bankAccount.h

// #ifndef H_bankAccount 
// #define H_bankAccount

// class bankAccount {
// public:
//     bankAccount(int acctNumber = -1, double bal = 0.0); 
//     void setAccountNumber(int acct);
//     int getAccountNumber() const;
//     double getBalance() const;
//     void deposit(double amount);
//     void withdraw(double amount);
//     void print() const; 

// private:
//     int accountNumber;
//     double balance; 
// };

// #endif
