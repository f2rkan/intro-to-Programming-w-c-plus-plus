#include<iostream>
using namespace std;

enum muhendislik
{
    makina = 1,
    bilgisayar,
    endustri,
    insaat,
    gida
}bolum;

int main(void)
{
    muhendislik q;
    q = insaat;
    cout << q << endl;
    bolum = bilgisayar;

    cout << "bolum: " << bolum << endl;
    cout << "yeni bolum: " << bolum + 2 << endl;

    return 0;
}