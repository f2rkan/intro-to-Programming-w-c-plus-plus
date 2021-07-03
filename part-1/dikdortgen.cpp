#include<iostream>
#include<cmath>

using namespace std;

class DikdortgenPrizma
{
    public:
        float a, b, c;
        float alan();
        float hacim();
}k;

//dikdortgenler prizması hacmi

float DikdortgenPrizma::hacim()
{
    return (a * b * c);
}

//dikdortgen prizmasının alanı
float DikdortgenPrizma::alan()
{
    float alan;
    alan = pow((2 * (a * b + b * c + a * c)), 2)    ;
    return alan;
}

int main(void)
{
    k.a = 2.0;
    k.b = 3.0;
    k.c = 4.0;

    cout << "a = " << k.a << ", b = " << k.b << ", c = " << k.c << endl;

    cout << "alan = " << k.alan() << endl;
    cout << "hacim = " << k.hacim() << endl;

    return 0;
}