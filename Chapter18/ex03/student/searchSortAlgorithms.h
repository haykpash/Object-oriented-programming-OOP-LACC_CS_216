#ifndef SEARCHSORTALGORITHMS_H
#define SEARCHSORTALGORITHMS_H

template<class elemType>
int seqOrdSearch(const elemType list[], int length, const elemType& item) {
    for(int i = 0; i < length; i++) {
        if(list[i] == item) return i; 
        else if(list[i] > item) break; 
    }
    return -1;
}

#endif
