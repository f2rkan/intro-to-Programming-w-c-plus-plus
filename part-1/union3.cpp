#include<iostream>
using namespace std;

union kayit
{
    int m;
    double n;
    char l;
};

int main(void)
{
    kayit x;
    x.m = 18;
    x.n = 12000;
    x.l = 'K';

    cout << "x - m: " << x.m << endl;
    cout << "x - n: " << x.n << endl;
    cout << "x - l: " << x.l << endl;

    return 0;
}