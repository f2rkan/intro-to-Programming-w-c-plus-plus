#include<iostream>

using namespace std;

int main(void)
{
    cout << "kac sayi yazdiracaksin: ";
    int miktar;
    cin >> miktar;

    int * pointer;
    pointer = new int[miktar];

    if(pointer == NULL)
        cout << "hata, bellek ayrilamadi" << endl;
    else
    {for(int i = 0; i < miktar; i++)
    {
        cout << "sayi girisi: ";
        cin >> pointer[i];
    }

    cout << "girdigin degerler:\n";
    for(int i = 0; i < miktar; i++)
        cout << pointer[i] << endl;
    }
    delete[] pointer;
    return 0;
}