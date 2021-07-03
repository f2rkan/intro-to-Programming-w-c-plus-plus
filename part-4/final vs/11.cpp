#include<iostream>
using namespace std;

class ornek
{
    protected:
        int sayi;
    public:
        ornek(int n) {sayi = n; }
        int deger() {return sayi; }
};
int kup(ornek d)
{
    return d.deger() * d.deger() * d.deger();
}
int kare(ornek d)
{
    return d.deger() * d.deger();
}

int main(void)
{
    ornek o(7), q(8);
    cout << "kup: " << kup(o) << endl;
    cout << "kare: " << kare(q) << endl;

    return 0;
}