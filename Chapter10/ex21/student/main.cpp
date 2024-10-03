#include "bankAccount.h"
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    vector<bankAccount> customers;
    int choice;
    string name, accType;
    double deposit, interestRate;
    
    do {
        cout << "1: Enter 1 to add a new customer.\n";
        cout << "2: Enter 2 for an existing customer.\n";
        cout << "3: Enter 3 to print customers data.\n";
        cout << "9: Enter 9 to exit the program.\n";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << endl;
                cout << "Enter customer's name: ";
                cin.ignore(); // to consume the '\n' character from previous input
                getline(cin, name);
                cout << endl;
                cout << "Enter account type (checking/savings): ";
                cin >> accType;
                cout << endl;
                cout << "Enter amount to be deposited to open account: ";
                cin >> deposit;
                cout << endl;
                cout << "Enter interest rate (as a percent): ";
                cin >> interestRate;
                cout << endl;
                
                customers.emplace_back(name, accType, deposit, interestRate);
                break;
            case 3:
                for (const auto& acc : customers) {
                    cout << endl;
                    cout << "Account Holder Name: " << acc.getAccountHolderName() << endl;
                    cout << "Account Type: " << acc.getAccountType() << endl;
                    cout << "Account Number: " << acc.getAccountNumber() << endl;
                    // cout << "Balance: $" << acc.getBalance() << endl;
                    cout << "Balance: $" << fixed << setprecision(2) << acc.getBalance() << endl;
                    cout << "Interest Rate: " << acc.getInterestRate() << "%" << endl;
                    cout << "*****************************" << endl;
                    cout << endl;
                }
                break;
            case 9:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}
