#include"example.h"
#include<iostream>

using namespace std;
Stack::Stack() { top = 0; }
Stack::~Stack() { cout << "yikici cagirildi" << endl; }
bool Stack::isempty() const { return top == 0; }
bool Stack::isfull() const {return top == MAX; }
bool Stack::push(const Item & i)
{
    if(top < MAX)
    {
        items[top++] = i;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item & i)
{
    if(top > 0)
    {
        i = items[--top];
        return true;
    }
    else if (top == 0)
    {
        cout << "basa dondun.\n";
    }
    else
        return false;
}