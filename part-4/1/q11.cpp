#include<iostream>

int main(void)
{
    using namespace std;
    double kasa = 0;
    double giris;
    int i = 1;
    x:
    cout << i << ". hafta" << " carsamba gunu: ";
    while(cin >> giris)
    {
        kasa += giris * 3.3;
        cout << kasa << endl;
        cout << "persembe: ";
        cin >> giris;
        kasa += giris * 3.3;
        cout << kasa << endl;
        i++;
        if(i > 0)
        goto x;
    }
    
    return 0;
}