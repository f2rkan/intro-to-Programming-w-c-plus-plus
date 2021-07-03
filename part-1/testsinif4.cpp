#include<iostream>

using namespace std;

class sinif
{
    private:
        int a, b, c, d;
    public:
        sinif(int q, int w, int e, int r);
        ~sinif();
        void yaz();
};

sinif::sinif(int q, int w, int e, int r)
{
    a = q;
    b = w;
    c = e;
    d = r;
}

sinif::~sinif()
{}

void sinif::yaz()
{
    cout << "1. :" << a << endl << "2. :" << b << endl << "3. :" << c << endl << "4. :" << d << endl; 
}

int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    sinif s(a, b, c, d);
       
    s.yaz();

    return 0;
}