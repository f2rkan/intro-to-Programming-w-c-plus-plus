#include<iostream>
using namespace std;

class dikdortgen;
class kare;

class dikdortgen
{
    private:
        int genislik, yukseklik;
    public:
        int alan() {return genislik * yukseklik;}
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
    yukseklik = k.kenar;
    genislik = k.kenar;
}

int main(void)
{
    kare k;
    dikdortgen q;

    k.setkenar(5);
    q.donustur(k);

    cout << q.alan() << endl;

    return 0;
}