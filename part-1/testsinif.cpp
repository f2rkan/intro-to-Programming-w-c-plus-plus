#include<iostream>

using namespace std;

class testsinif
{
    private:
        int a, b;
    public:
        testsinif();
        ~testsinif();

        void yazdir();
};

testsinif::testsinif()
{
    a = 0;
    b = 0;
}

testsinif::~testsinif()
{}

void testsinif::yazdir()
{
    cout << "birinci degisken degeri: " << a << endl;
    cout << "ikinci degisken degeri: " << b << endl;
}

int main(void)
{
    testsinif t;
    t.yazdir();

    return 0;
}
