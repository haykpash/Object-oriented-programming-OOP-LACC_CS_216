#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int score_ranges[] = {0, 0, 0, 0, 0, 0, 0, 0};

    ifstream inputFile("Ch8_Ex4Data.txt");

    int score;
    
    while (inputFile >> score) {
        if (score >= 0 && score <= 24) {
            score_ranges[0]++;
        } else if (score <= 49) {
            score_ranges[1]++;
        } else if (score <= 74) {
            score_ranges[2]++;
        } else if (score <= 99) {
            score_ranges[3]++;
        } else if (score <= 124) {
            score_ranges[4]++;
        } else if (score <= 149) {
            score_ranges[5]++;
        } else if (score <= 174) {
            score_ranges[6]++;
        } else {
            score_ranges[7]++;
        }
    }

    inputFile.close();

    string range_names[] = {"0 - 24", "25 - 49", "50 - 74", "75 - 99", "100 - 124", "125 - 149", "150 - 174", "175 - 200"};
    for (int i = 0; i < 8; i++) {
        cout << range_names[i] << " " << score_ranges[i] << endl;
    }

    return 0;
}
