#include<iostream>
#include"poin.h"

using namespace std;

int main(void)
{
    poin a(3, 1);
    poin b(1, 2);
    poin c;

    c += a;
    cout << c.x << ", " << c.y << endl;
    
    c += b;
    cout << c.x << ", " << c.y << endl;
    
    c += 4;
    cout << c.x << ", " << c.y << endl;

    ++c;
    cout << c.x << ", " << c.y << endl;

    c++;
    cout << c.x << ", " << c.y << endl;

    return 0;
}