#include<iostream>
using namespace std;

struct donors
{
    string name;
    int amount;
};

const int contribution = 10000;

int main(void)
{
    cout << "bagisci sayisini gir: ";
    int bagisci_sayisi;
    cin >> bagisci_sayisi;
    cin.get();

    donors * list = new donors[bagisci_sayisi];
    int donationSizes[bagisci_sayisi];
    for(int i = 0; i < bagisci_sayisi; i++)
    {
        cout << "bagisci " << i + 1 << ":\n";
        cout << "isim: ";
        getline(cin, (list +i) -> name, '\n');
        cout << "bagis miktari: ";
        cin >> (list + i) -> amount;
        cin.get();

        if((list + i) -> amount > contribution)
            donationSizes[i] = 1;
        else
            donationSizes[i] = 0;
    }
    int counter = 0;
    cout << "list of grand patrons:\n";

    for(int i = 0; i < bagisci_sayisi; i++)
    {
        if(donationSizes[i] == 1)
        {
            cout << (list + i) -> name << ", $" << (list + i) -> amount << endl;
            counter = 1;
        }
    }
    if(!counter)
        cout << "None." << endl;
    counter = 0;
    cout << "list of remaining patrons:\n";
    for(int i = 0; i < bagisci_sayisi; i++)
    {
        if(donationSizes[i] == 0)
        {
            cout << (list + i) -> name << endl;
            counter = 1;
        }
    }

    if(!counter)
        cout << "None." << endl;
   
    cout << "enjoy!" << endl;
 
    return 0;
}
