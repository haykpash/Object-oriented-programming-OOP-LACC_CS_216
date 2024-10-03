#include <iostream>
#include "orderedArrayListType.h"

using namespace std; 
 
void orderedArrayListType::insert(int insertItem) 
{
    if (length == 0)        
        list[length++] = insertItem;                               
    else if (length == maxSize)
        cout << "Cannot insert in a full list." << endl;
    else
    {
        int loc;

        bool found = false;

        for (loc = 0; loc < length; loc++)
        {
            if (list[loc] >= insertItem)
            {
                found = true;
                break;
            }
        }

        for (int i = length; i > loc; i--)
             list[i] = list[i - 1]; 

        list[loc] = insertItem; 
        length++;  
    }
} 

int orderedArrayListType::seqSearch(int searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < length; loc++)
    {
        if (list[loc] >= searchItem)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        if (list[loc] == searchItem)
            return loc;
        else
            return -1;
    }
    else
        return -1;
} 

 
void orderedArrayListType::insertAt(int location, int insertItem)
{
    if (location < 0 || location >= maxSize)
            cout << "The position of the item to be "
                 << "inserted is out of range." << endl ;
    else if (length == maxSize) 
            cout << "Cannot insert in a full list." << endl;
    else
    {
        cout << "This is a sorted list. Inserting at the proper place."
             << endl;
        insert(insertItem);
    }
} 

void orderedArrayListType::insertEnd(int insertItem)
{
    if (length == maxSize) 
        cout << "Cannot insert in a full list." << endl;
    else
    {
        cout << "This is a sorted list. Inserting at the proper "
             << "place." << endl;
        insert(insertItem);
    }
} 

void orderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be replaced is out "
             << "of range." << endl;
    else
    {
        removeAt(location);
        insert(repItem);
    }
} 

void orderedArrayListType::remove(int removeItem)
{
    int loc;

    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list." << endl;
    }
} 

orderedArrayListType::orderedArrayListType(int size)
                    : arrayListType(size)
{
} 
