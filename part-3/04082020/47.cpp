#include<iostream>

struct CandyBar
{
    std::string name;
    double weight;
    int calories;  
};

int main(void)
{
    using namespace std;

    cout << "kac sekerleme icin giris alacagiz: ";
    int giris_sayisi;
    cin >> giris_sayisi;

    CandyBar * snack = new CandyBar[giris_sayisi];

    cout << "giris yapmaya baslayabilirsin:\n";
    for(int i = 0; i < giris_sayisi; i++)
    {
        cout << i + 1 << ". marka icin giris yapiyorsun\n";
        cin.get();
        cout << "name: "; getline(cin, snack[i].name);
        cout << "weight: "; cin >> snack[i].weight;
        cout << "calories: "; (cin >> snack[i].calories);
    }

    cout << endl << endl << "girdigin bilgiler:\n";
    for(int i = 0; i < giris_sayisi; i++)
    {
        cout << i + 1 << ". marka bilgileri:\n";
        cout << "name: " << snack[i].name << endl;
        cout << "weight: " << snack[i].weight << endl;
        cout << "calories: " << snack[i].calories << endl;
    }

    
    cout << endl << "Done.\n";
    return 0;
}