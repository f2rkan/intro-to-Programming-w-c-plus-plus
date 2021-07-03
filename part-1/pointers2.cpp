#include<iostream>
using namespace std;

int main()
{
    int i = 27;
    int j = i;
    int *p = &i;

        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
        cout << "p = " << p << endl;

        cout << "i = " << &i << endl;
        cout << "j = " << &j << endl;
        cout << "p = " << &p << endl;

    return 0;
}