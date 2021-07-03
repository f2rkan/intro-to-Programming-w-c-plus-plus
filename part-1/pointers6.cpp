#include<iostream>
using namespace std;

int main(void)
{
    double d = 10;
    int * i;
    i = (int *)&d;

    cout << "d = " << d << endl;
    cout << "&d = " << &d << endl;
    cout << "i = " << i << endl;
    cout << "*i = " << *i << endl;
    cout << "*(double*)i = " << *(double *)i << endl;

    return 0;
}