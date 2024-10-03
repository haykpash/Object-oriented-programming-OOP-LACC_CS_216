#include "unorderedSetType.h"
#include <iostream>

using namespace std;

void unorderedSetType::insertAt(int location, int insertItem) {
    if (seqSearch(insertItem) == -1) {
        unorderedArrayListType::insertAt(location, insertItem);
    } else {
        cout << insertItem << " is already in the set.\n";
    }
}

void unorderedSetType::insertEnd(int insertItem) {
    if (seqSearch(insertItem) == -1) {
        unorderedArrayListType::insertEnd(insertItem);
    } else {
        cout << insertItem << " is already in the set.\n";
    }
}

void unorderedSetType::replaceAt(int location, int repItem) {
    if (location < 0 || location >= maxSize) {
        cout << "The location of the item to be replaced is out of range.\n";
    } else if (seqSearch(repItem) == -1 || list[location] == repItem) {
        unorderedArrayListType::replaceAt(location, repItem);
    } else {
        cout << repItem << " is already in the set.\n";
    }
}

unorderedSetType::unorderedSetType(int size)
    : unorderedArrayListType(size) {
    // The base class constructor initializes the list.
}

bool unorderedSetType::isNumberInSet(int number) const {
    if (seqSearch(number) == -1) {
        cout << number << " is not in intList" << endl;
    } else {
        cout << number << " is in the intList" << endl;
    }
}
