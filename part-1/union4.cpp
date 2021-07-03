#include<iostream>

using namespace std;

union x
{
    int k;
    char l[2];  
};
int main(void)
{
    union x m;
    m.k = 120;
    m.l[0] = 'x';
    m.l[1] = 'y';
    m.l[2] = 99;

    cout << m.l[0];
    cout << m.l[1];
    cout << m.l[2];

    cout << "\nstruct x'in kapladigi boyut: "
         << sizeof(x) << " byte\n";

    return 0;
}