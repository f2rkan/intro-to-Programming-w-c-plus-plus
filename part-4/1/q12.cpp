#include<iostream>

int main(void)
{
    using namespace std;
    double giris;
    double kasa = 0;
    int i = 1;
    x:
    if(i > 3)
    {
        i=1;
        goto x;
    }
    cout << i << ". gun: ";
    while(cin >> giris)
    {
        kasa += giris * 2.5;
        cout << kasa << endl;
        i++;
        goto x;
    }
    

    return 0;
}