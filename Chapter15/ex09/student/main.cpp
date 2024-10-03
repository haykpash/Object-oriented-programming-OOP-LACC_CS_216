#include <iostream>

using namespace std;

// Recursive function to reverse the digits of an integer
int reverseDigits(int num, int rev = 0) {
    // Base case: when the number becomes 0
    if (num == 0) {
        return rev;
    }
    // Recur with the remaining number and update the reversed number
    return reverseDigits(num / 10, rev * 10 + num % 10);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    int reversed = reverseDigits(num);
    cout << "Reversed integer: " << reversed << endl;
    
    return 0;
}
