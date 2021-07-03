#include<iostream>

using namespace std;
class cdikdortgen;
class ckare;

class cdikdortgen
{
    private:
        int genislik, yukseklik;
    public:
        int alan() {return (genislik * yukseklik); }
        void donustur(ckare a);
};

class ckare
{
    private:
        int kenar;
    public:
        void setkenar(int a) {kenar = a; }
        friend class cdikdortgen;
};

void cdikdortgen::donustur(ckare a)
{
    genislik = a.kenar;
    yukseklik = a.kenar;
}

int main(void)
{
    ckare sqr;
    cdikdortgen rect;
    sqr.setkenar(4);
    rect.donustur(sqr);

    cout << rect.alan();

    return 0;
}