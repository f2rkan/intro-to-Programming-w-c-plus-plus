#include<iostream>
using namespace std;

class KARMASIK
{
    public:
        int x, y;
        KARMASIK() {}
        KARMASIK(int, int);
        KARMASIK operator+(KARMASIK);
        void yaz();
};
KARMASIK::KARMASIK(int a, int b)
{
    x = a;
    y = b;
}
KARMASIK KARMASIK::operator+(KARMASIK k)
{
    KARMASIK hesap;
    hesap.x = x + k.x;
    hesap.y = y + k.y;

    return hesap;
}
void KARMASIK::yaz()
{
    cout << x;
    if(y > 0) cout << "+" << y << "i";
    else cout << "-" << y << "i";
}

int main(void)
{
    KARMASIK k1(1, 2);
    KARMASIK k2(7, 9);

    k1 = k1 + k2;
    k1.yaz();

    return 0;
}