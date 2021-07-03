#include<iostream>
#include<array>

int main(void)
{
    using namespace std;
    array<long double, 101>factorial;
    factorial[0] = factorial[1] = 1LL;

    for(int i = 2; i < 101; i++)
    factorial[i] = i * factorial[i - 1];

    for(int i = 0; i < 101; i++)
    cout << i << "! = " << factorial[i] << endl;

    return 0;
}