#include<iostream>
using namespace std;

union deneme
{
    char q[33];
    int a;
    double b;
    
};

int main(void)
{
    deneme qq;
    cout << &qq.a << endl;
    cout << &qq.b << endl;
    cout << &qq.q << endl;

    cout << endl << endl;
    cout << sizeof(qq.a) << endl;
    cout << sizeof(qq.b) << endl;
    cout << sizeof(qq.q) << endl;

    cout << sizeof(qq) << endl;
    return 0;
}