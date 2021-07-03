#include<iostream>

#define SIFIR 0
#include<climits>

int main(void)
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    sue = SIFIR;

    cout << sam << endl << sue << endl;

    return 0;
}