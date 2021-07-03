#include<iostream>

using namespace std;

class poi
{
    public:
        int x, y;
        poi() {x = 0; y = 0;}
        poi(int, int);
        poi operator++();
        void read(int & d1, int &d2)
        {
            d1 = x;
            d2 = y;
        }
};

poi::poi(int a, int b)
{
    x = a;
    y = b;
}

poi poi::operator++()
{
    x++;
    y++;
}

int main(void)
{
    poi p(5, 7);
    int a1, a2;
    ++p;
    p.read(a1, a2);
    cout << "(" << a1 << ", " << a2 << ")" << endl;

    return 0;
}