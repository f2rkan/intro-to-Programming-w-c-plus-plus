#include<iostream>
using namespace std;

class over
{
    public:
        int x, y;
        over() {x = 0; y = 0;}
        over(int, int);
        void oku(int &, int &);
        over operator--();
};
over::over(int a, int b)
{
    x = a;
    y = b;
}
void over::oku(int & a, int & b)
{
    a = x;
    b = y;
}
over over::operator--()
{
    x--;
    y--;
}

int main(void)
{
    over o(10, 11);
    int o1, o2;
    --o;
    o.oku(o1, o2);
    cout << "(" << o1 << ", " << o2 << ")" << endl;

    return 0;
}