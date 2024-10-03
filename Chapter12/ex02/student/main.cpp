#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int correctAnswers(const string& answerKey, const string& studentAnswers);
char studentGrade(int score);

int main() {
    ifstream inFile("Ch12_Ex2Data.txt");
    if (!inFile) {
        cerr << "Unable to open file.";
        return 1;
    }

    const int MAX_STUDENTS = 200;
    string key, *studentIDs = new string[MAX_STUDENTS];
    string *studentAnswers = new string[MAX_STUDENTS];
    int *scores = new int[MAX_STUDENTS];
    char *grades = new char[MAX_STUDENTS];

    getline(inFile, key); 

    cout << "Key: " << key << endl;

    int numStudents = 0; 
    while (getline(inFile, studentIDs[numStudents], ' ') && numStudents < MAX_STUDENTS) {
        getline(inFile, studentAnswers[numStudents]);
        scores[numStudents] = correctAnswers(key, studentAnswers[numStudents]);
        grades[numStudents] = studentGrade(scores[numStudents]);
        numStudents++;
    }

    // Displaying results
    for (int i = 0; i < numStudents; i++) {
        cout << studentIDs[i] << " " << studentAnswers[i] << " "
             << scores[i] << " " << grades[i] << endl;
    }

    // Clean up dynamically allocated memory
    delete[] studentIDs;
    delete[] studentAnswers;
    delete[] scores;
    delete[] grades;

    return 0;
}

int correctAnswers(const string& answerKey, const string& studentAnswers) {
    int score = 0;
    for (size_t i = 0; i < answerKey.length(); ++i) {
        if (i < studentAnswers.length() && answerKey[i] == studentAnswers[i]) {
            score += 2;
        } else if (i >= studentAnswers.length() || studentAnswers[i] == ' ') {
        } else {
            score -= 1;
        }
    }
    return score;
}

char studentGrade(int score) {
    double percentage = (score / 40.0) * 100;

    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}
