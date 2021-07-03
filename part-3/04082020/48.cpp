#include<iostream>

struct William_Wingate_Pizza
{
    std::string name;
    double diameter;
    double weight;
};

int main(void)
{
    using namespace std;

    cout << "kac pizza icin giris yapacaksin: ";
    int pizza_sayisi;
    cin >> pizza_sayisi;

    William_Wingate_Pizza * william = new William_Wingate_Pizza[pizza_sayisi];

    for(int i = 0; i < pizza_sayisi; i++)
    {
        cout << i + 1 << ". pizza icin giris yapiyorsun:\n";
        cin.get();
        cout << "name: "; getline(cin, william[i].name);
        cout << "diameter: "; cin >> william[i].diameter;
        cout << "weight: "; cin >> william[i].weight;
    }

    cout << endl << "yaptigin girisler:\n";
    for(int i = 0; i < pizza_sayisi; i++)
    {
        cout << i + 1 << ". pizza hakkindaki bilgiler:\n";
        cout << "name: " << william[i].name << endl;
        cout << "diameter: " << william[i].diameter << endl;
        cout << "weight: " << william[i].weight << endl;
    }

    delete [] william;
    cout << endl << endl;

    return 0;
}