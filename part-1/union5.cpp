#include<iostream>
using namespace std;

int main(void)
{
    union
    {
        int deger;
        struct 
        {
          int kare[10];
          int kubu[10];  
        }islem;
    }rakam;

    long i;
    for(i = 1; i < 5; i++)
    {
        rakam.deger = i;
        rakam.islem.kare[i] = i * i;
        rakam.islem.kubu[i] = i * i * i;

        cout << rakam.deger << "\t" << rakam.islem.kare[i]
             << "\t" << rakam.islem.kubu[i] << endl;
    }

    cout << endl << endl;
    cout << sizeof(rakam.islem) << endl;
    cout << sizeof(rakam) << endl;

    return 0;
}