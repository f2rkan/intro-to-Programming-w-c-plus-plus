#include<iostream>

using namespace std;

int toplama(int s1, int s2) {return s1 + s2; }
int cikarma(int s1, int s2) {return s1 - s2; }

int main(void)
{
    int (*islem) (int, int);

    islem = toplama;
    cout << islem(3, 4) << endl;
    
    islem = cikarma;
    cout << islem(6, 2) << endl;

    return 0;
}