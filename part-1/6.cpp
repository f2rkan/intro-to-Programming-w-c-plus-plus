#include<iostream>
using namespace std;

class Dikdortgen
{
    public:
        int boyut1, boyut2;
        Dikdortgen(int, int);
        int operator>(Dikdortgen);
        int operator<(Dikdortgen);
        int operator==(Dikdortgen);
        int operator>=(Dikdortgen);
        int operator<=(Dikdortgen);
        int operator!=(Dikdortgen);
        Dikdortgen operator++();
};
Dikdortgen::Dikdortgen(int a, int b)
{
    boyut1 = a;
    boyut2 = b;
}
int Dikdortgen::operator>(Dikdortgen b)
{
    if(boyut1 * boyut2 > b.boyut1 * b.boyut2)
        return 1;
    else
        return 0;
}
Dikdortgen Dikdortgen::operator++()
{
    boyut1++;
    boyut2++;

    cout << "test----" << (*this).boyut1 << "\n";
    return *this;
}
int Dikdortgen::operator<(Dikdortgen b)
{
    if(boyut1 * boyut2 < b.boyut1 * b.boyut2)
        return 1;
    else
        return 0;
}
int Dikdortgen::operator!=(Dikdortgen b)
{
    if(boyut1 * boyut2 != b.boyut1 * b.boyut2)
        return 1;
    else
        return 0;
}
