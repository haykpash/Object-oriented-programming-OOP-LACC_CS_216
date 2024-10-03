
#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

int main() {
    const int SIZE = 10;
    int myList[SIZE];

    // Prompt user to input 10 integers
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> myList[i];
    }

    // Output the list before sorting
    cout << "\nList before sorting:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << myList[i] << " ";
    }
    cout << endl;

    // Call insertionSort to sort the list
    insertionSort(myList, SIZE);

    // Output the list after sorting
    cout << "\nList after sorting:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << myList[i] << " ";
    }
    cout << endl;

    return 0;
}
