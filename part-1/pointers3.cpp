#include<iostream>
using namespace std;

int main(void)
{
    int i = 10;
    int j = i;
    int * p = &i;

    cout << i << endl;
    cout << j << endl;
    cout << p << endl;
    cout << endl << endl;

    cout << &i << endl;
    cout << &j << endl;
    cout << &p << endl;
    cout << *p << endl;

    return 0;
}