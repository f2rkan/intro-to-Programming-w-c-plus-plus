#include<iostream>

int main(void)
{
    using namespace std;
    double kasa = 0;
    double giris;
    int i = 0;
    cout << "basacagin tutar: ";
    while(cin >> giris)
    {
        
        kasa += giris * 2.46;
        cout << i + 1 << ". gun kasa miktari: " << kasa << endl;
        cout << "basacagin tutar: ";
        i++;
    }

    return 0;
}