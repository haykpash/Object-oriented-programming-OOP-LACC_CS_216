#ifndef MODIFIED_BUBBLE_SORT_H
#define MODIFIED_BUBBLE_SORT_H

template <class elemType>
void modifiedBubbleSort(elemType list[], int length) {
    bool noSwap;
    for (int pass = 1; pass < length; pass++) {
        noSwap = true;
        for (int index = 0; index < length - pass; index++) {
            if (list[index] > list[index + 1]) {
                elemType temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
                noSwap = false; 
            }
        }
        if (noSwap) {
            break; 
        }
    }
}

#endif 