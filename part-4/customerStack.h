#ifndef CUSTOMERSTACK_H_
#define CUSTOMERSTACK_H_

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class CustomerStack
{
    private:
        enum {MAX = 10};
        Item items[MAX];
        int top;
    public:
        CustomerStack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item & item);
        bool pop(Item & item);
};
#endif