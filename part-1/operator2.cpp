#include<iostream>

using namespace std;

class vec
{
    public:
        int x, y;
        vec() {}
        vec(int, int);
        vec operator*(vec);
};

vec::vec(int a, int b)
{
    x = a;
    y = b;
}
vec vec::operator*(vec par)
{
    vec temp;
    temp.x = x + par.x;
    temp.y = y + par.y;

    return temp;
}
int main(void)
{
    vec d1(3, 5), d2(8, 10), c;

    c = d1.operator*(d2);
    cout << c.x << ", " << c.y << endl;

    return 0;
}