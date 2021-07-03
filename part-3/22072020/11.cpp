#include<iostream>
#include<cstring>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(void)
{
    using namespace std;

    inflatable guest =
    {
        "text",
        1.55,
        4.6
    };

    inflatable pal = {"text2", 1.22, 3.555};

    cout << "listed guest:" << endl;
    cout << "name: " << guest.name << "\n";
    cout << "volume: " << guest.volume << endl;
    cout << "price: " << guest.price << endl;

    cout << "listed pal:\n";
    cout << "name: " << pal.name << endl;
    cout << "volume: " << pal.volume << endl;
    cout << "price: " << pal.price << endl;

    cout << endl << endl;
    cout << "islemler:" << endl;
    cout << "name1 + name2: " << strcat(guest.name, pal.name) << endl;

    cout << "volume1 + volume2: " << guest.volume + pal.volume << endl;
    cout << "price1 + price2: " << guest.price + pal.price << endl;

    inflatable qq;
    qq = pal;

    cout << "qq name: " << qq.name;

    return 0;
}