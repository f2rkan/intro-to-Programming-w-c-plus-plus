#include<iostream>

using namespace std;

class testSinif
{
    private:
        int sayi;
    public:
        testSinif(int n) {sayi = n; }
        int deger() {return sayi; }
};
int kare(testSinif & t)
{
    t = testSinif(t.deger() + 1);
    return t.deger() * t.deger();
}
int kare2(testSinif & t)
{
    t = testSinif(t.deger() + 1);
    return t.deger() * t.deger();
}

int main(void)
{
    //karesi alınacak degerler
    testSinif a(8), b(9);

    cout << kare(a) << endl << kare(b) << endl;

    cout << a.deger() << endl << b.deger() << endl;

    cout << "***++++***" << endl;
    cout << kare2(a) << endl << kare2(b) << endl;

    cout << a.deger() << endl << b.deger() << endl;
    
    return 0;
}