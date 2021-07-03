#include<iostream>

struct araba
{
    char name[20];
    int year;
    double price;
};

int main(void)
{
    using namespace std;

    araba * ssmotors = new araba;

    cout << "araba markasi: ";
        cin.get(ssmotors -> name, 20);
    cout << "arabanin uretim yili: ";
        cin >> (*ssmotors).year;
    cout << "arabanin fiyati: $";
        cin >> ssmotors -> price;
    

    cout << "arabanin:\n";
    cout << "markasi " << ssmotors -> name << endl;
    cout << "modeli " << (*ssmotors).year << endl;
    cout << "fiyati $" << (*ssmotors).price << endl;

    delete ssmotors;

    return 0; 
}