// #include <iostream>
// #include <iomanip>
// #include "checkingAccount.h"
// #include "savingsAccount.h"

// using namespace std;

// int main() {

//     checkingAccount checkAcc(1001, 500, 50, 1.25, 25);

//     savingsAccount saveAcc(1002, 300, 2);

//     cout << fixed << setprecision(2);

//     cout << "Checking Account:" << endl;
//     checkAcc.deposit(200);
//     checkAcc.withdraw(100);
//     checkAcc.postInterest();
//     checkAcc.print();

//     cout << "\nSavings Account:" << endl;
//     saveAcc.deposit(150);
//     saveAcc.withdraw(50);
//     saveAcc.postInterest();
//     saveAcc.print();

//     return 0;
// }



// #include "bankAccount.h"
// #include <iostream>
// using namespace std;

// int main() {
//     int accountNumber;
//     double balance, amount;
//     cout << "Enter account number: ";
//     cin >> accountNumber;
//     cout << "Enter initial balance: ";
//     cin >> balance;

//     bankAccount myAccount(accountNumber, balance);

//     // Demonstrate deposit
//     cout << "Enter amount to deposit: ";
//     cin >> amount;
//     myAccount.deposit(amount);
//     myAccount.print();

//     // Demonstrate withdrawal
//     cout << "Enter amount to withdraw: ";
//     cin >> amount;
//     myAccount.withdraw(amount);
//     myAccount.print();

//     return 0;
// }



// #include "bankAccount.h"
// #include <iostream>
// using namespace std;

// int main() {
//     bankAccount myAccount;
//     int choice;
//     int accountNumber;
//     double amount;

//     cout << "Bank Account Simulator" << endl;

//     do {
//         cout << "\nMenu:" << endl;
//         cout << "1. Set Account Number" << endl;
//         cout << "2. Deposit Money" << endl;
//         cout << "3. Withdraw Money" << endl;
//         cout << "4. Print Account Details" << endl;
//         cout << "5. Exit" << endl;
//         cout << "Enter your choice (1-5): ";
//         cin >> choice;

//         switch(choice) {
//             case 1:
//                 cout << "Enter account number: ";
//                 cin >> accountNumber;
//                 myAccount.setAccountNumber(accountNumber);
//                 break;
//             case 2:
//                 cout << "Enter deposit amount: ";
//                 cin >> amount;
//                 myAccount.deposit(amount);
//                 break;
//             case 3:
//                 cout << "Enter withdrawal amount: ";
//                 cin >> amount;
//                 myAccount.withdraw(amount);
//                 break;
//             case 4:
//                 myAccount.print();
//                 break;
//             case 5:
//                 cout << "Exiting program." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter 1-5." << endl;
//         }
//     } while (choice != 5);

//     return 0;
// }



// #include "checkingAccount.h"
// #include <iostream>

// using namespace std;

// int main() {
//     // Initialize with a checkingAccount instead of a bankAccount
//     checkingAccount myCheckingAccount; // Default values are used for initialization
    
//     int choice;
//     int accountNumber;
//     double amount;
//     double interestRate, serviceCharge, minimumBalance;

//     cout << "Bank Account Simulator" << endl;

//     do {
//         cout << "\nMenu:" << endl;
//         cout << "1. Set Account Number" << endl;
//         cout << "2. Deposit Money" << endl;
//         cout << "3. Withdraw Money" << endl;
//         cout << "4. Print Account Details" << endl;
//         cout << "5. Set Interest Rate" << endl;
//         cout << "6. Set Minimum Balance" << endl;
//         cout << "7. Set Service Charge" << endl;
//         cout << "8. Post Interest" << endl;
//         cout << "9. Write a Check" << endl;
//         cout << "10. Exit" << endl;
//         cout << "Enter your choice (1-10): ";
//         cin >> choice;

//         switch(choice) {
//             case 1:
//                 cout << "Enter account number: ";
//                 cin >> accountNumber;
//                 myCheckingAccount.setAccountNumber(accountNumber);
//                 break;
//             case 2:
//                 cout << "Enter deposit amount: ";
//                 cin >> amount;
//                 myCheckingAccount.deposit(amount);
//                 break;
//             case 3:
//                 cout << "Enter withdrawal amount: ";
//                 cin >> amount;
//                 myCheckingAccount.withdraw(amount);
//                 break;
//             case 4:
//                 myCheckingAccount.print();
//                 break;
//             case 5:
//                 cout << "Enter interest rate (as a percentage): ";
//                 cin >> interestRate;
//                 myCheckingAccount.setInterestRate(interestRate / 100); // Convert to decimal
//                 break;
//             case 6:
//                 cout << "Enter minimum balance: ";
//                 cin >> minimumBalance;
//                 myCheckingAccount.setMinimumBalance(minimumBalance);
//                 break;
//             case 7:
//                 cout << "Enter service charge: ";
//                 cin >> serviceCharge;
//                 myCheckingAccount.setServiceCharge(serviceCharge);
//                 break;
//             case 8:
//                 myCheckingAccount.postInterest();
//                 cout << "Interest posted." << endl;
//                 break;
//             case 9:
//                 cout << "Enter check amount: ";
//                 cin >> amount;
//                 myCheckingAccount.writeCheck(amount);
//                 break;
//             case 10:
//                 cout << "Exiting program." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter 1-10." << endl;
//                 break;
//         }
//     } while (choice != 10);

//     return 0;
// }


#include <iostream>
#include <iomanip>
#include "savingsAccount.h"
#include "checkingAccount.h"

using namespace std;

int main() 
{
     int accountNumber = 1000;

     checkingAccount jackAccount(accountNumber++,1000);
     checkingAccount lisaAccount(accountNumber++, 450);
     savingsAccount samirAccount(accountNumber++, 9300);
     savingsAccount ritaAccount(accountNumber++, 32);
      
     jackAccount.deposit(1000);
     lisaAccount.deposit(2300);
     samirAccount.deposit(800);
     ritaAccount.deposit(500);

     jackAccount.postInterest();
     lisaAccount.postInterest();
     samirAccount.postInterest();
     ritaAccount.postInterest();

     cout << "***********************************" << endl;
     jackAccount.print();
     lisaAccount.print();
     samirAccount.print();
     ritaAccount.print();
     cout << "***********************************" << endl << endl;

     jackAccount.writeCheck(250);
     lisaAccount.writeCheck(350);
     samirAccount.withdraw(120);
     ritaAccount.withdraw(290);

     cout << "********After withdrawals ***************" << endl;
     jackAccount.print();
     lisaAccount.print();
     samirAccount.print();
     ritaAccount.print();
     cout << "***********************************" << endl << endl;

     return 0;
}