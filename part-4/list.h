#ifndef LIST_H_
#define LIST_H_

typedef double Item;

class List
{
    private:
        enum{MAX = 10};
        Item items[MAX];
        int index;
    public:
        List();
        void add(const Item & item);
        bool isEmpty(void) const;
        bool isFull(void) const;
        void visit(void (*pf)(Item & item));
        int numberOfItems(void) const {return index;}
        void printList(void) const; 
};

#endif