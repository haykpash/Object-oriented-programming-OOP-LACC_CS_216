#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

int main() {

    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(list)/sizeof(list[0]);

    int searchFor[] = {3, 7, 10};
    for(int item : searchFor) {
        int index = seqOrdSearch(list, length, item);
        if(index != -1) {
            cout << "Item " << item << " found at index " << index << endl;
        } else {
            cout << "Item " << item << " not found." << endl;
        }
    }

    return 0;
}
