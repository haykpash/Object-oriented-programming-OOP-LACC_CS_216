#include <iostream>
#include "doublyLinkedList.h" 

using namespace std;

int main() {
    doublyLinkedList<int> intList;
    int number;

    cout << "Enter a list of positive integers ending with -999: " << endl;
    cin >> number;
    while (number != -999) {
        intList.insert(number);
        cin >> number;
    }

    cout << "\nList in ascending order: ";
    intList.print();
    cout << endl;

    cout << "List in descending order: ";
    intList.reversePrint();
    cout << endl;

    cout << "Enter item to be deleted: ";
    cin >> number;
    if (intList.search(number)) {  
        intList.deleteNode(number);
        cout << "\nList after deleting " << number << " : ";
    } else {
        cout << "The item to be deleted is not in the list." << endl;
    }
    intList.print();
    cout << endl;

    cout << "Enter item to be searched: ";
    cin >> number;
    if (intList.search(number)) {
        cout << number << " found in the list." << endl;
    } else {
        cout << number << " is not in the list." << endl;
    }

    cout << "********Testing copy constructor***********" << endl;
    doublyLinkedList<int> intListCopy(intList);
    cout << "intListCopy: ";
    intListCopy.print();
    cout << endl;

    cout << "********Testing assignment operator***********" << endl;
    doublyLinkedList<int> tempList;
    tempList = intList;  
    cout << "tempList: ";
    tempList.print();
    cout << endl;

    return 0;
}
