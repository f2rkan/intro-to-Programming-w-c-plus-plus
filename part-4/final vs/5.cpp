#include<iostream>
#include<cmath>

using namespace std;

class dikdortgen
{
    public:
        float a, b, c;
        float alan();
        float hacim();
}k;

float dikdortgen::hacim() {return a * b * c; }
float dikdortgen::alan()
{
    float alan;
    alan = pow((2 * (a * b + b * c + a * c)), 2);

    return alan;
}

int main(void)
{
    k.a = 2;
    k.b = 3;
    k.c = 5;

    cout << "a = " << k.a << ", b = " << k.b << ", c = " << k.c << endl;
    cout << "alan = " << k.alan();
    cout << "\nhacim: " << k.hacim() << endl;

    return 0;
}