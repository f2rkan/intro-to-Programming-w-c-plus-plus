#include<iostream>
using namespace std;

int main(void)
{
    double d = 12.1;
    int * i;
    i = (int *) &d;
    
    cout << *(double*)i;
    return 0;
}