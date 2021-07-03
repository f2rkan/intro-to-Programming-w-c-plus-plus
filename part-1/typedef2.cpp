#include<iostream>
using namespace std;

typedef char krktr;
typedef int * iPointer;
typedef int intDizi[3];

int main(void)
{
    intDizi a;
    krktr x = 'k';
    iPointer pI;
    pI = a + 2;

    for(int i = 0; i < 3; i++)
    {
        a[i] = i * i;
        cout << "dizinin " << i << ". elemani: " << a[i] << endl;
    }

    cout << "x = " << x << endl;
    cout << "pI = " << pI << endl;
    cout << "*pI = " << *pI << endl;

    return 0;
}