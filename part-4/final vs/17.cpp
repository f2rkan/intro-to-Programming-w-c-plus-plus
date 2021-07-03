#include<iostream>
using namespace std;

class test
{
    private:
        int sayi1, sayi2;
    public:
        test(int x, int y) {this -> sayi1 = x; this -> sayi2 = y; }
        int topla() {return this -> sayi1 + this -> sayi2; }
        void goruntule();
};
void test::goruntule()
{
    int t;
    t = this -> topla();

    cout << "toplam: " << t << endl;
}

int main(void)
{
    test t(12, 13);
    t.topla();
    t.goruntule();

    return 0;
}