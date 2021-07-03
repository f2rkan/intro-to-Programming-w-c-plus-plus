#include<iostream>

using namespace std;

int main(void)
{
    short int *p;
    short int *pdizi[10];

    cout << "p = " << sizeof(p) << " byte" << endl;
    cout << "pdizi = " << sizeof(pdizi) << " byte" << endl;

    return 0;
}