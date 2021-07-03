#include<iostream>

using namespace std;

class ornek
{
    private:
        int sayi;
    public:
        ornek(int n) {sayi = n; }
        int deger() {return sayi; }
};

int kup(ornek d)
{
    return d.deger() * d.deger() * d.deger();
}

int main(void)
{
    ornek o(7), q(5);
    cout << kup(o) << endl << kup(q) << endl;

    return 0;
}
