#include<iostream>
#include"move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}


void Move::showmove() const
{
    using std::cout;
    using std::endl;

    cout << "x = " << this -> x << endl;
    cout << "y = " << this -> y << endl;

    return;
}
Move Move::add(const Move & m) const
{
    Move s(m.x + this -> x, m.y + this -> y);
    return s;
}

void Move::reset(double a, double b)
{
    x= a;
    y = b;

    return;
}
