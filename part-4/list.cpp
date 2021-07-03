#include<iostream>
#include"list.h"

List::List()
{
    index = 0;
}
void List::add(const Item & item)
{
    using std::cout;
    using std::endl;

    if(isFull() == 0)
        items[index++] = item;
    else
        cout << "liste dolu; daha fazla oge ekleyemezsin.\n";
}
bool List::isEmpty(void) const
{
    if(0 == index)
        return true;
    else
        return false;
}
bool List::isFull(void) const
{
    if(MAX == index)
        return true;
    else
        return false;
}

void List::visit(void (*pf)(Item & item))
{
    for(int i = 0; i < index; i++)
        (*pf)(items[i]);
}

void List::printList(void) const
{
    using std::cout;
    using std::endl;

    if(isEmpty())
    {
        cout << "no list to print" << endl;

        return;
    }
    else
    {
        for(int i = 0; i < index; i++)
            cout << "Item " << i + 1 << ": "
                 << items[i] << endl;
    }
}