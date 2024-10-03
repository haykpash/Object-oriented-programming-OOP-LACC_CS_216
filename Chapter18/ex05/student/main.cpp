#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

template <typename T>
void printArray(T array[], int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    modifiedBubbleSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
