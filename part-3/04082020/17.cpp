#include<iostream>

using namespace std;

int main(void)
{
    int a = 57;
    int * b;
    b = &a;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "(int *) a: " << (int *) a << endl;
    cout << "(int *) b: " << (int *) b << endl;
    return 0; 
}