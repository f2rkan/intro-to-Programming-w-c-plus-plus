#include<iostream>

double harmonic(int, int);

int main(void)
{
    using namespace std;
    int a, b;
    cout << "bir cift sayi gir (q to quit):\n";

    while(cin >> a >> b && a != 0 && b != 0)
    {
        cout << a << " ve " << b << " sayilarinin harmonik ortalamasi: " << harmonic(a, b) << endl;
        cout << "next two numbers:\n";
    }

    return 0;
}
double harmonic(int x, int y)
{
    return x * y * 2.0 / (x + y);
}