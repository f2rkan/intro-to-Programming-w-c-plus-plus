#include<iostream>

using namespace std;

int main(void)
{
    float *p, **pp, e;
    p = &e;
    pp = &p;

    **pp = 2.175;

    cout << "e = " << e << endl;
    cout << "*p = " << *p << endl;
    cout << "**p = " << **pp << endl;
    cout << "&e = " << &e << endl;
    cout << "*&p = " << *&p << endl;
    cout << "*&pp = " << *&pp << endl;
    cout << "**&p = " << **&pp << endl;

    return 0;    
}