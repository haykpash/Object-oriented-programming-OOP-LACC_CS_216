#include <iostream>

using namespace std;

void printLine(int spaces, int stars) {
    for(int i = 0; i < spaces; i++) {
        cout << " ";
    }
    for(int i = 0; i < stars; i++) {
        cout << "* ";
    }
    cout << endl;
}

void printStarPattern(int n, int current = 1, bool isAscending = true) {
    // Base case
    if (n < 1) {
        return;
    }

    int spaces = n - current;
    printLine(spaces, current);

    if(isAscending && current < n) {
        printStarPattern(n, current + 1, true);
    } else if (isAscending && current == n) {
        printStarPattern(n, current - 1, false);
    } else {
        if(current > 1) {
            printStarPattern(n, current - 1, false);
        }
    }
}

int main() {
    int lines;
    cout << "Enter the number of lines in the pattern: ";
    cin >> lines;
    
    printStarPattern(lines);
    
    return 0;
}
