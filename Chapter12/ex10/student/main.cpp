#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main() {
    unorderedArrayListType myUnorderedList(10);
    unorderedArrayListType myUnorderedList2(10);

    // Add elements to the list
    myUnorderedList.insertEnd(10);
    myUnorderedList.insertEnd(20);
    myUnorderedList.insertEnd(30);
    myUnorderedList.insertEnd(40);
    myUnorderedList.insertEnd(50);
    myUnorderedList.insertEnd(59);
    myUnorderedList.insertEnd(99);


    myUnorderedList2.insertEnd(10);
    myUnorderedList2.insertEnd(20);
    myUnorderedList2.insertEnd(30);
    myUnorderedList2.insertEnd(40);
    myUnorderedList2.insertEnd(50);
    myUnorderedList2.insertEnd(59);

    // Output the largest element
    cout << "The largest number in intList: " << myUnorderedList.max() << endl;
    cout << "The largest number in intList: " << myUnorderedList2.max() << endl;
    return 0;
}
