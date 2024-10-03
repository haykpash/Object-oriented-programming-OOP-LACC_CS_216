#include <iostream>
#include "unorderedSetType.h"

using namespace std;

int main() {

    unorderedSetType mySet(10); // Create a set with an initial size of 10.
    unorderedSetType mySet1(10);

    mySet.print();
    mySet.insertEnd(2); 
    mySet.insertEnd(3);
    mySet.insertEnd(9);
    mySet.insertEnd(12);
    mySet.insertEnd(15);
    mySet.insertEnd(95);
    mySet.insertEnd(54); 
    mySet.print();
    mySet.isNumberInSet(13);

    mySet1.print();
    mySet1.insertEnd(58); 
    mySet1.insertEnd(85);
    mySet1.insertEnd(74);
    mySet1.insertEnd(95);
    mySet1.insertEnd(62);
    mySet1.insertEnd(51);
    mySet1.insertEnd(4); 
    mySet1.print();
    mySet1.isNumberInSet(999);

    return 0;
}
