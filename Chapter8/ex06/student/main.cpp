
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

    char stuGrade;
    int correctAnswers(string, string);
    char studentGrade(int score);
    
    int main()
{
    ifstream inFile;

    inFile.open("Ch8_Ex6Data.txt");

    double score;
    string key;
    string studentID;
    string stuAnswers;

    getline(inFile, key);

    while (getline(inFile, studentID, ' ')) {
     
        getline(inFile, stuAnswers);

        score = correctAnswers(key, stuAnswers);

        stuGrade = studentGrade(score);

        cout << studentID << " " << stuAnswers << " " 
             << score << " " << stuGrade << endl;
    }
    return 0;
}

int correctAnswers(string answerKey, string studentAnswers)
{
    int score = 0;
    int diff = answerKey. length() - studentAnswers.length();

    for (int i = 0; i < 20; i++)  {

        if (answerKey[i] == studentAnswers[i])
        {
            score += 2;
        }                                        
        else if (studentAnswers[i] == ' ')
        {
            score += 0;
        }
        else
        {
            score -= 1;
        }
    }
    return score - diff;
}

char studentGrade(int x)
{
    double score = 0;

    char grade = ' ';
    
    score = x / 40.0 * 100;

    if (score >= 90)
        grade = 'A';
    else if (score < 90 && score > 79)
        grade = 'B';
    else if (score <= 79 && score > 69)
        grade = 'C';
    else if (score <= 69 && score > 60)
        grade = 'D';
    else if (score <= 59)
        grade = 'F';

    return grade;
}
