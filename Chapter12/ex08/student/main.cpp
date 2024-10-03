#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main() {
    unorderedArrayListType myList1(50);
    unorderedArrayListType myList2(50);

    int data1[] = {1, 5, 9, 13, 17, 19, 21, 25};
    int data2[] = {32, 35, 38, 43, 49, 47, 30, 25};

    for (int num : data1) {
        myList1.insertEnd(num); 
    }

    for (int num : data2) {
        myList2.insertEnd(num); 
    }

    cout << ' ';
    myList1.print();
    cout << endl;

    myList1.removeAll(9);

    myList1.print();
    cout << endl;

    myList2.print();
    cout << endl;

    myList2.removeAll(43);

    myList2.print();
    cout << endl;


    return 0;
}


