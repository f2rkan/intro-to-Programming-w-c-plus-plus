#include<iostream>

int y_to_m(int);

int main(void)
{
    using namespace std;

    int dizi[3];

    cout << "sureleri gir: ";
    for(int i = 0; i < 3; i++)
    {
        cin >> dizi[i];
    }

    cout << "cevrilmis halleri:\n";
    for(int i = 0; i < 3; i++)
    cout << y_to_m(dizi[i]) << endl;


    cout << "Done." << endl;
    return 0;
}
int y_to_m(int q)
{
    return q * 40;
}