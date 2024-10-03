#ifndef UNORDERED_ARRAY_LIST_TYPE_H
#define UNORDERED_ARRAY_LIST_TYPE_H

#include "arrayListType.h"

class unorderedArrayListType : public arrayListType {
private:
    int *list; 
    int length; 
    int maxSize; 
public:
    void removeAll(int item) override; 
    void insertEnd(int item); 
    void print() const; 
    unorderedArrayListType(int size); 
    ~unorderedArrayListType();
};

#endif 
