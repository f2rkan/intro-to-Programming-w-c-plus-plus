//struct with pointer
#include<iostream>
using namespace std;

struct ogrenci
{
    string name;
    int year;
};

int main(void)
{
    ogrenci * a, b;

    a = &b;

    cout << "a icin giris yap:\n";
    cout << "isim: ";
        getline(cin, (*a).name);
    cout << "yil: ";
        cin >> (*a).year;

    cout << "girislerin:\n";
        cout << "name: " << (*a).name << endl << "yil: " << b.year << endl;

    
    return 0;    
}