#include<iostream>
using namespace std;

class Vektor
{
    public:
        int x, y;
        Vektor(){ }
    Vektor(int, int);
    Vektor operator*(Vektor);
};

Vektor::Vektor(int a, int b)
{
    x = a;
    y = b;
}

Vektor Vektor::operator*(Vektor param)
{
    Vektor temp;
    temp.x = x * param.x;
    temp.y = y * param.y;

    return temp;
}

int main(void)
{
    Vektor a(3, 1);
    Vektor b(1, 2);
    Vektor c;

    c = a * b;
    cout << c.x << ", " << c.y;

    return 0;
}