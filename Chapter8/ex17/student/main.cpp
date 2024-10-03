#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const int WORKERS = 10;

void getDate(ifstream& inf, string n[], double runData[WORKERS][3], int c);
void weeklyPay(double timePay[][3]);
void empData(string n[], double timePay[][3]);
void avSalery(double timePay[][3], double avr[0]);
void greatPay(string n[], double timePay[][3], double avr[0]);

int main() {

    string n[WORKERS];
    double timePay[WORKERS][3];
    double avr[0];
    int c = 0;

    ifstream inFile;

    inFile.open("ch8_Ex17Data.txt");

    if (!inFile) {
      cout << "Error opening input file." << endl;
      return 1;
    }

     getDate(inFile, n, timePay, c);
     weeklyPay(timePay);
     empData(n, timePay);
     avSalery(timePay, avr);
     greatPay(n, timePay, avr);
    
    return 0;
}
void getDate(ifstream& inf, string n[], double timePay[][3], int c) {

      while(inf >> n[c]) {

        for(int i = 0; i < 2; i++) {

         inf >> timePay[c][i];

        }
        c++;
   }
}
void weeklyPay(double timePay[][3]) {
    
    for(int i = 0; i < WORKERS; i++) {
        timePay[i][2] = timePay[i][0] * timePay[i][1];
         if(timePay[i][0] > 40) {
           timePay[i][2] += (timePay[i][0] - 40) * timePay[i][1] * 0.50;
         }
    }
}
void empData(string n[], double timePay[][3]) {

  cout <<"Name    Hrs Worked  Pay Rate    Salary" << endl;
   
   for(int i = 0; i < 10; i++) {
     
      cout << setw(8) << left << n[i];

      cout  << fixed << setprecision(2) << setw(10) << right << timePay[i][0];
      cout  << fixed << setprecision(2) << setw(10) << right << timePay[i][1];
      cout  << fixed << setprecision(2) << setw(10) << right << timePay[i][2];

      // for(int j = 0; j < 3; j++) {

      //   cout  << fixed << setprecision(2) << setw(10) << left << timePay[i][j];
      // }
    cout << endl;
   }
}
void avSalery(double timePay[][3], double avr[0]) {

    double total;

    for(int i = 0; i < WORKERS; i++) {

        total += timePay[i][2];
    }
    avr[0] = total / 10;

    cout << fixed << setprecision(2) << "Average Salary: $" << avr[0] << endl;
}
void greatPay(string n[], double timePay[][3], double avr[0]) {

    // cout << "Salary Greater than Avg: ";

   for(int i = 0; i < WORKERS; i++) {
     
     if(timePay[i][2] > avr[0]) {
       cout << n[i] << " ";
     }
   }
}
