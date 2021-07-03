#include<iostream>

using namespace std;

class cdikdortgen;
class ckare;

class cdikdortgen
{
    private:
        int genislik, yukseklik;
    public:
        int alan() {return genislik * yukseklik; }
        void donustur(ckare q);
};
class ckare
{
    private:
        int kenar;
    public:
        void setkenar(int a) {kenar = a; }
        friend class cdikdortgen;
};

void cdikdortgen::donustur(ckare q)
{
    genislik = q.kenar;
    yukseklik = q.kenar;
}

int main(void)
{
    ckare c;
    cdikdortgen d;

    c.setkenar(4);
    d.donustur(c);

    cout << "alan: " << d.alan() << endl;

    return 0;
}