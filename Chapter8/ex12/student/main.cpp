#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int RUNNERS = 5;
const int DAYS = 7;

void getData(ifstream& inf, string n[], double runData[][8], int count);
void calculateAverage(double runData[][8], int count);
void print(string n[], double runData[][8], int count);
  
int main() {

    string runners[RUNNERS];
    double runData[RUNNERS][DAYS + 1];
    int count = 0;

    ifstream inFile;

    inFile.open("ch8_Ex12Data.txt");

    if (!inFile) {
      cout << "Error opening input file." << endl;
      return 1;
    }
    getData(inFile, runners, runData, count);
    calculateAverage(runData, count);
    print(runners, runData, count);

	return 0;
}
void getData(ifstream& inf, string n[], double runData[][8], int count) {

  while(inf >> n[count]) {

      double sum = 0;

      for (int i = 0; i < DAYS; i++) {

          inf >> runData[count][i];
          sum += runData[count][i];
      }
      runData[count][DAYS] = sum;
      count++;
  }
}
// void calculateAverage(double runData[][8], int count) {

//     for (int i = 0; i < DAYS; i++) {

//         double sum = 0;

//         for (int j = 0; j < count; j++) {

//           sum += runData[j][i];
//         }
//       runData[RUNNERS][i] = sum / count;
//     }
//     double total = 0;

//     for (int i = 0; i < count; i++) {

//       total += runData[i][DAYS];
//     }
//   runData[RUNNERS][DAYS] = total / count;
// }
void calculateAverage(double runData[][DAYS + 1], int count) {
    for (int day = 0; day < DAYS; day++) {
        double sum = 0;
        for (int runner = 0; runner < RUNNERS; runner++) {
            sum += runData[runner][day];
        }
        runData[RUNNERS][day] = sum / count; // Correctly storing averages
    }

    // Calculate the overall average for each runner
    for (int runner = 0; runner < RUNNERS; runner++) {
        double total = 0;
        for (int day = 0; day < DAYS; day++) {
            total += runData[runner][day];
        }
        runData[runner][DAYS] = total / DAYS; // Average per runner
    }

    // Calculate the total average for all runners over all days
    double grandTotal = 0;
    for (int runner = 0; runner < RUNNERS; runner++) {
        grandTotal += runData[runner][DAYS];
    }
    runData[RUNNERS][DAYS] = grandTotal / RUNNERS; // Overall average
}

void print(string n[], double runData[][8], int count) {

    cout << "Name         Day 1   Day 2   Day 3   Day 4   Day 5   Day 6   Day 7   Average" << endl;

     for(int i = 0; i < 5; i++) {

       cout << setw(10) << left << n[i] << " ";

       for(int j = 0; j < 8; j++) {

        cout << right << fixed << setprecision(2) << setw(7) << runData[i][j] << " ";
      }
    cout << endl;
  }
}