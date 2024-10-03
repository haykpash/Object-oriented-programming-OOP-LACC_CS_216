#include <iostream>
#include "circularLinkedList.h" 

using namespace std;

int main() {

    circularLinkedList<int> list;
    int number;

    cout << "Enter number ending with -999" << endl;
    cin >> number;
    while (number != -999) {
        list.insertNode(number);
        cin >> number;
    }

    cout << "\nList 1: ";
    list.print();
    cout << "\nLength List 1: " << list.length() << endl;

    cout << "Enter the number to be searched: ";
    cin >> number;

    if (!list.search(number)) {
        cout << number << " not in the list" << endl;
    } else {
        cout << number << " found in the list" << endl;
    }

    cout << "Enter the number to be deleted: ";
    cin >> number;
    
    if (!list.search(number)) {
        cout << "The item to be deleted is not in the list" << endl;
    } else {
        list.deleteNode(number);
    }

    cout << "List 1: ";
    list.print();
    cout << "\nLength List 1: " << list.length() << endl;

    return 0;
}
