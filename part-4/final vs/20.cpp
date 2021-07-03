#include<iostream>
using namespace std;

class point
{
    public:
        int x, y;
        point() {x = 0; y = 0;}
        point(int, int);
        int operator*(point);
};
point::point(int a, int b)
{
    x = a;
    y = b;
}
int point::operator*(point p)
{
    int dot;
    dot = (x * p.x) + (y * p.y);

    return dot;
}
int main(void)
{
    point a(1, 2);
    point b(3, 4);

    int carpim;
    carpim = a * b;
    cout << carpim << endl;

    return 0;
}