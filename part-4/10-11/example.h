#ifndef EXAMPLE_H_
#define EXAMPLE_H_

typedef unsigned long Item;

class Stack
{
    private:
        enum {MAX = 4};
        Item items[MAX];
        int top;
    public:
        Stack();
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item & i);
        bool pop(Item & i);
};
#endif