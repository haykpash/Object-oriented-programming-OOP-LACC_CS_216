#include <iostream>
#include <iomanip> 
#include <limits> 


using namespace std;

void getInputAndConvert();

int main() {
    getInputAndConvert();
    return 0;
}

void getInputAndConvert() {
    double feet, inches;
    
    while (true) {
        try {
            cout << "Enter a length in feet: ";
            if (!(cin >> feet)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw invalid_argument("A non positive number is entered");
            }
            if (feet < 0) throw invalid_argument("A non positive number is entered");

            cout << "Enter a length in inches: ";
            if (!(cin >> inches)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw invalid_argument("A non positive number is entered");
            }
            if (inches < 0) throw invalid_argument("A non positive number is entered");

            double totalInches = feet * 12 + inches;
            double centimeters = totalInches * 2.54;

            cout << fixed << setprecision(2);
            cout << "The equivalent length in centimeters is: " << centimeters << " cm\n";
            break; 
        } catch (invalid_argument& e) {
            cout << e.what() << endl;
            cout << "Please try again.\n";
        }
    }
}
