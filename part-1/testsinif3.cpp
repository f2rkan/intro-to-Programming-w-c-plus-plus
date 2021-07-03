#include<iostream>

using namespace std;

class orneksinif
{
    private:
        int a, b, c, d;
    public:
        orneksinif(int i , int j, int x, int y);
        ~orneksinif();
        void yaz();
};

orneksinif::orneksinif(int i, int j, int x, int y)
{
    a = i;
    b = j;
    c = x;
    d = y;
}
orneksinif::~orneksinif()
{}

void orneksinif::yaz()
{
    cout << "birinci degisken: " << a << endl;
    cout << "ikinci degisken: " << b << endl;
    cout << "ucuncu degisken: " << c << endl;
    cout << "dorduncu degisken: " << d << endl;
}

int main(void)
{
    orneksinif d(1, 2, 3, 4);
    d.yaz();

    return 0;
}
