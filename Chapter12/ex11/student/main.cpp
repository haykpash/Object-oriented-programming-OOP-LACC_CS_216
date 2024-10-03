#include <iostream>
#include "orderedArrayListType.h" 
        
using namespace std;

int main() {

    orderedArrayListType myOrderedList(20);

    cout << "Inserting numbers into the list." << endl;
    myOrderedList.insert(10);
    myOrderedList.insert(40);
    myOrderedList.insert(30);
    myOrderedList.insert(20);
    myOrderedList.insert(50);

    cout << "List after insertions: ";
    myOrderedList.print();

    int searchItem = 30;
    int foundAt = myOrderedList.seqSearch(searchItem);
    if (foundAt != -1)
        cout << "Item " << searchItem << " found at position " << foundAt << "." << endl;
    else
        cout << "Item " << searchItem << " not found in the list." << endl;

    cout << "Replacing item at position 2." << endl;
    myOrderedList.replaceAt(2, 35);

    cout << "List after replacement: ";
    myOrderedList.print();

    int removeItem = 40;
    cout << "Removing item: " << removeItem << endl;
    myOrderedList.remove(removeItem);

    cout << "List after removal: ";
    myOrderedList.print();

    return 0;
}

