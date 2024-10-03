#include <iostream>
#include <vector>

using namespace std;

// Function to reverse an array
void reverseArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {125, 100, 94, 88, 75, 71, 66, 58, 53, 37, 32, 28, 14, 10, 8};
    
    cout << "Original array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";

    reverseArray(arr);

    cout << "Reversed array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
