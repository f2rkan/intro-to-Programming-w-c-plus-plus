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
    if(boyut1 * boyut2 < b.boyut1 * b.boyut2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Dikdortgen::operator<(Dikdortgen b)
{
    if (boyut1 * boyut2 < b.boyut1 * b.boyut2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Dikdortgen Dikdortgen::operator++()
{
    boyut1 = boyut1 + 1;
    boyut2 = boyut2 + 1;
    cout << "test----" << (*this).boyut1 << endl;
    return *this;
}

int main(void)
{
    Dikdortgen d1(3, 4);
    Dikdortgen d2(3, 6);

    cout << "d. boyut: " << d1.boyut1 << '\n';
    cout << "d. boyut2: " << d1.boyut2 << '\n';
    
   if(d1 > d2)
        cout << "1. dikdortgen, 2. dikdortgenden daha buyuk." << endl;
    else
        cout << "2. dikdortgen, 1. dikdortgenden daha buyuk" << endl;
    if(d1 == d2)
        cout << "1. dikdortgen, 2. dikdortgene esit" << endl;
    else
        cout << "1. dikdortgen, 2. dikdortgene esit degil" << endl;
    
    ++d1;

    cout << "Boyut1: " << d1.boyut1 << endl;
    cout << "Boyut2: " << d2.boyut2 << endl;

    return 0;
}

