#include <iostream>

using namespace std;

#include <iostream>

// Recursive function to reverse the elements of an array between low and high indices
void reverseArray(int arr[], int low, int high) {
    if (low < high) {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        
        // Recurse on the next pair of elements
        reverseArray(arr, low + 1, high - 1);
    }
}

int main() {

    // Test 1
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int low1 = 2;
    int high1 = 4;

    reverseArray(arr1, low1, high1);
    
    int arr1Len = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < arr1Len; ++i) {
        cout << arr1[i];
        if (i < arr1Len - 1) {
            cout << " ";
        }
    }
    cout << endl;

    // Test 2
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int low2 = 2;
    int high2 = 9;

    reverseArray(arr2, low2, high2);
    
    int arr2Len = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < arr2Len; ++i) {
        cout << arr2[i];
        if (i < arr2Len - 1) {
            cout << " ";
        }
    }
    cout << endl;


    // Program
    int length, low, high;

    cout << "Enter the number of elements in the array: ";
    cin >> length;

    // Allocate memory for the array
    int* arr = new int[length];

    cout << "Enter " << length << " integers:\n";
    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the low index: ";
    cin >> low;
    cout << "Enter the high index: ";
    cin >> high;

    reverseArray(arr, low, high);

    cout << "Array after reversal:\n";

    for (int i = 0; i < length; ++i) {
        cout << arr[i];
        if (i < length - 1) {
         cout << " ";
        }
    }
    cout << endl;

    delete[] arr;

    return 0;
}

