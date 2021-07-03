#include<iostream>

using namespace std;

class KARMASIK
{
    public:
        
        int x, y;
        KARMASIK() {}
        KARMASIK operator+(KARMASIK k);
        void yaz();
};
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
    if(y > 0)  cout << "+" << y << "i" << endl;
    else cout << "" << y << "i" << endl;
}

int main(void)
{
    KARMASIK k1, k2, c;

    cout << "x: ";
    cin >> k1.x;
    cout << "y: ";
    cin >> k1.y;

    cout << "x: ";
    cin >> k2.x;
    cout << "y: ";
    cin >> k2.y;
    
    c = k1 + k2;

    c.yaz();

    return 0;
}