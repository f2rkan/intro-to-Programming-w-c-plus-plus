#include"r1.h"

CustomerStack::CustomerStack()
{
    top = 0;
}

bool CustomerStack::isempty() const
{
    if(0 == top)
        return true;
    else
        return false;
}
bool CustomerStack::isfull() const
{
    if(MAX == top)
        return true;
    else
        return false;
}
bool CustomerStack::push(const Item & item)
{
    if(0 == isfull())
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
bool CustomerStack::pop(Item & item)
{
    if(0 == isempty())
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}