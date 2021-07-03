#include<iostream>

using namespace std;

class testSinif
{
    private:
        int sayi1, sayi2;
    public:
        testSinif(int x, int y) {this -> sayi1 = x; this -> sayi2 = y; }
        
        //toplama islemi
        int topla() {return this -> sayi1 + this -> sayi2; }
        void goruntule();
};

void testSinif::goruntule()
{
    int t;
    t = this -> topla();
    cout << "toplam: " << t << endl;
}

int main(void)
{
    testSinif t(7, 17);
    t.goruntule();

    return 0;
}