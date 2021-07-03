#include<iostream>
using namespace std;

class deneme
{
    public:
        int x, y;
        deneme(){x = 0; y = 0;}
        int operator<(deneme &);
        int operator>(deneme &);
        deneme(int, int);
};
deneme::deneme(int a, int b)
{
    x = a;
    y = b;
}
int deneme::operator<(deneme & a)
{
    return x < a.x && y < a.y;
}
int deneme::operator>(deneme & a)
{
    return x > a.x && y > a.y;
}

int main(void)
{
    deneme a(1, 2);
    deneme b(2, 3);

    if(a > b)
    {
        cout << "a > b" << endl;
    }
    else
        {
            cout << "a, b'den buyuk degil" << endl;
        }
    if(a < b)
    {
        cout << "b > a" << endl;
    }
    else
    {
        cout << "b, a'dan buyuk degil" << endl;
    }
    cout << "bye." << endl;
    return 0;
}