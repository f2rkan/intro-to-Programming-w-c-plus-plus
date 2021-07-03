#include<iostream>

struct araba
{
    int year;
    std::string marka;
    double fiyat;
};

int main(void)
{
    using namespace std;

    araba ssmotor[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        cout << i + 1 << ". araba icin giris yapiyorsun:" << endl;
        cout << "marka: ";
            getline(cin, ssmotor[i].marka);
        cout << endl << ssmotor[i].marka << " markasi icin devam ediyorsun:\n" << "yil: ";
        cin >> ssmotor[i].year;
        cout << "fiyat: ";
        cin >> ssmotor[i].fiyat;
        cin.get();
    }

    cout << "katalogun tamam:\n";
    for(i = 0; i < 5; i++)
    {
        cout << ssmotor[i].marka << " markasi icin:\n";
        cout << "yil: " << ssmotor[i].year << "\nfiyat: $" << ssmotor[i].fiyat << endl;
    }

    cout << "bye.\n";

    return 0;
}