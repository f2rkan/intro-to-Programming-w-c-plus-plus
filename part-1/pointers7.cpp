#include<iostream>
using namespace std;

int main(void)
{
    int *p1, i = 2;
    p1 = &i;

    cout << "i = " << i << endl;
    cout << "sizeof(i) = " << sizeof(i) << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "sizeof(p1) = " << sizeof(p1) << endl;
    cout << "sizeof(*p1) = " << sizeof(*p1) << endl;


    return 0;
}