#include<iostream>

int main(void)
{
    using namespace std;

    long * pt;
    pt = (long *) 0xB8000000;

    cout << pt << endl;
    return 0;
}