#include<iostream>
#include"plorg.h"

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "default Plorg object" << endl;
    Plorg p1;
    p1.show();

    cout << "siradaki Plorg nesnemiz icin bir isim ver: ";
    char name[30];
    cin.get(name, 30);
    cin.clear(); //hicbir sey girilmezse hata bayragını temizler
    while(cin.get() != '\n' && cin.eof() == 0)
        continue;
    cin.clear(); //hata bayraklarını sıfırlamak icin eof'a ulasırsak

    Plorg p2(name);
    cout << "yeni Plorg nesnemiz" << endl;
    p2.show();

    cout << "yeni Cl degeri: ";
    int Cl;
    while(!(cin >> Cl))
    {
        cin.clear();
        while(cin.get() != '\n' && cin.eof() == 0)
            continue;
        cout << "hata, tamsayi degil." << endl;
        cout << "yeni Cl degeri gir: ";
    }

    //change the Cl value
    p2.changeCl(Cl);

    //yeni Cl degerine sahip baskı nesnesi
    cout << "iste yeni Plorg" << endl;
    p2.show();

    cout << "Bye!" << endl;
    return 0;
}