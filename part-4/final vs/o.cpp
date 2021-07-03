#include<iostream>
using namespace std;

class Isaretci
{
    int x, y;
    public:
        Isaretci(int a = 2, int b = 1)
        {x = a; y = b;}
        int getY() {return x;}
        int getX() {return y;}
};

int main()
{
    Isaretci p1(0,0), *p2;
    p2 = &p1;
    cout << p2 -> getX() << "-" << p2 -> getY();
    return 0;
}