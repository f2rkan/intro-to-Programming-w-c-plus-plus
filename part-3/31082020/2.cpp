#include<iostream>

const int ArSize = 100;
int main(void)
{
    using namespace std;

    long double factorial[ArSize];
    factorial[0] = factorial[1] = 1LL;

    for(int i = 2; i <= ArSize; i++)
        factorial[i] = i * factorial[i-1];
        
    for(int j = 0; j <= ArSize; j++)
        cout << j << "! = " << factorial[j] << endl;
    
    return 0;
}