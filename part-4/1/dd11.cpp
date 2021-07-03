#include<iostream>

int main(void)
{
    using namespace std;
    int giris;
    double kasa = 3.0;
    int i = 1;
    cout << "giris: ";
    while(cin >> giris)
    {
        kasa += giris * 3;
        cout << "guncel kasa: #" << i << ": " << kasa << endl;
        i++;
    }
    
    return 0;
}