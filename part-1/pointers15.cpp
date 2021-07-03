#include<iostream>

using namespace std;

int toplama(int s1, int s2) {return s1 + s2; }
int cikarma(int s1, int s2) {return s1 - s2; }

int main(void)
{
    int (*islem)(int, int);
    cout << "islem pointer fonksiyonu, toplama fonksiyonunu gosteriyor:" << endl;
    islem = toplama;
    cout << islem(5, 10) << endl;

    cout << "islem pointer fonksiyonu, cikarma islemini gosteriyor:" << endl;

    islem = cikarma;
    cout << islem(9, 3) << endl;

    return 0;
}