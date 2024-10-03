#ifndef H_unorderedSetType
#define H_unorderedSetType

#include "unorderedArrayListType.h"

class unorderedSetType : public unorderedArrayListType 
{
public:
    void insertAt(int location, int insertItem) override;
    void insertEnd(int insertItem) override;
    void replaceAt(int location, int repItem) override;

    bool isNumberInSet(int number) const;

    unorderedSetType(int size = 100);
};

#endif
