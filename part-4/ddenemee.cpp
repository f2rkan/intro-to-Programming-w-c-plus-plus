#include<iostream>
#include"deneme.h"

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "Bir plorg nesnesi olusturalim" << endl;
    Plorg p1;
    p1.show();

    cout << "siradaki plorg nesnemiz icin bir isim ver: ";
    char name[30];
    cin.get(name, 30);
    cin.clear();
    while(cin.get() != '\n' && cin.eof() == 0)
        continue;
    cin.clear();

    Plorg p2(name);
    cout << "yeni plorg nesnemiz:\n";
    p2.show();

    cout << "yeni Cl degeri: ";
    int Cl;
    while(!(cin >> Cl))
    {
        cin.clear();
        while(cin.get() != '\n' && cin.eof() == 0)
            continue;
        cout << "Cl degeri icin bir integer girmedin." << endl;
        cout << "Cl degerini tekrar gir: ";
    }
    p2.changeCl(Cl);
    cout << "son duzenlemeler sonrasi ikinci nesnemiz:\n";
    p2.show();

    cout << "Bye." << endl;
    return 0;
}