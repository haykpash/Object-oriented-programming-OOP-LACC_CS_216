#include "unorderedArrayListType.h"
#include <iostream>

unorderedArrayListType::unorderedArrayListType(int size) {
    maxSize = size;
    length = 0;
    list = new int[maxSize];
}

unorderedArrayListType::~unorderedArrayListType() {
    delete[] list;
}

void unorderedArrayListType::insertEnd(int item) {
    if (length < maxSize) {
        list[length++] = item;
    }
}

void unorderedArrayListType::print() const {
    for (int i = 0; i < length; i++) {
        std::cout << list[i] << " ";
    }
}

void unorderedArrayListType::removeAll(int item) {
    int i = 0;
    while (i < length) {
        if (list[i] == item) {
            for (int j = i; j < length - 1; j++) {
                list[j] = list[j + 1];
            }
            length--;
        } else {
            i++;
        }
    }
}
