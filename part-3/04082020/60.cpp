#include<iostream>

int main(void)
{
    using namespace std;

    int z = 5;
    int y = z++;

    cout << z << ", " << y << endl;
    cout << z << endl;
    cout << y << endl;

    return 0;
}