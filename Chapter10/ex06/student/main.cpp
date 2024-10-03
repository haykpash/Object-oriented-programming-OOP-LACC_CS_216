#include <iostream>
#include <string>
#include <map>

using namespace std;

class romanType { 

    string romanNumeral;
    int integerValue;

public:
    romanType() {
      
        romanNumeral = "";
        integerValue = 0;
    }
    void setRomanNumeral(string numeral) {
        romanNumeral = numeral;
        convertToInteger();
    }
    void convertToInteger() {

        map <char, int> romanValues = {
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}
        };

        integerValue = 0;

        for (size_t i = 0; i < romanNumeral.length(); i++) {

            int currentVal = romanValues[romanNumeral[i]];

            int nextVal = (i + 1 < romanNumeral.length()) 
                        ? romanValues[romanNumeral[i + 1]] 
                        : 0;

            if (currentVal >= nextVal) {
                integerValue += currentVal;
            } else {
                integerValue -= currentVal;
            }
        }
    }

    void printAsRomanNumeral() {
        cout << "Roman Numeral: " << romanNumeral << endl;
    }

    void printAsInteger() {
        cout << "Integer Value: " << integerValue << endl;
    }
};

int main() {

    romanType obj;

    string input, choice;

    cout << "Enter a Roman numeral: ";
    cin >> input;

    obj.setRomanNumeral(input);

    cout << endl;

    cout << "R for Roman:\nN for Integer: ";
    cin >> choice;

    if(choice == "R" || choice == "r") {
        obj.printAsRomanNumeral();
    } else {
        obj.printAsInteger();
    }
  return 0;
}
