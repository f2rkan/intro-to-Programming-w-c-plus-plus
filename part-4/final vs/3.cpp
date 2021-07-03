#include<iostream>
using namespace std;

class kare;
class dikdortgen;

class dikdortgen
{
    private:
        int yukseklik;
        int genislik;
    public:
        int alan() {return genislik * yukseklik; }
        void donustur(kare);
};
class kare
{
    private:
        int kenar;
    public:
        void setkenar(int a) {kenar = a; }
        friend class dikdortgen;
};
void dikdortgen::donustur(kare k)
{
    genislik = k.kenar;
    yukseklik = k.kenar;
}
int main(void)
{
    kare k;
    dikdortgen d;

    k.setkenar(6);
    d.donustur(k);

    cout << d.alan() << endl;

    return 0;
}