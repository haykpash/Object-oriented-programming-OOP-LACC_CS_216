#ifndef H_arrayListType
#define H_arrayListType

class arrayListType {
public:
    bool isEmpty() const;
    bool isFull() const;
    int listSize() const;
    int maxListSize() const;
    void print() const;
    bool isItemAtEqual(int location, int item) const;
    void removeAt(int location);
    void retrieveAt(int location, int& retItem) const;
    void clearList();
    arrayListType(int size = 100);
    arrayListType(const arrayListType& otherList);
    ~arrayListType();

protected:
    int *list;       
    int length;       
    int maxSize;      
};

#endif
