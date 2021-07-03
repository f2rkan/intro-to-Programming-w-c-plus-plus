#include<iostream>

using namespace std;

class sinif
{
    protected:
        int a, b;
    public:
        sinif();
        friend int cikar(sinif s);
};

sinif::sinif()
{
    a = 40;
    b = 12;
}
int cikar(sinif s)
{
    return s.a - s.b;
}

int main(void)
{
    sinif q;
    cout << cikar(q) << endl;

    return 0;
}