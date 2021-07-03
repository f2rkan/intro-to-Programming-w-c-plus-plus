#include<iostream>
int main(void)
{
    using namespace std;
    int x, y;

    cout << "iki sayi gir, karsilastiracagim: ";
    cin >> x >> y;

    int q = x > y ? x : y;
    cout << q << endl;

    return 0;
}