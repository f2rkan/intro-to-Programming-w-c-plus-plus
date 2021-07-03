#include<iostream>
using namespace std;

void topla_CallDeger(int toplam, int sayi) {toplam += sayi; }
void topla_CallReferans(int * toplam, int sayi) {*toplam += sayi; }

int main(void)
{
    int total = 1000;
    cout << endl << endl;

    topla_CallDeger(total, 1000);
    cout << "call by value: " << total << endl;

    topla_CallReferans(&total, 100);
    cout << "call by reference: " << total << endl;

    return 0;
}