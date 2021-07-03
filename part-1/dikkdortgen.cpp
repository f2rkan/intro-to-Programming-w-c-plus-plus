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

float DikdortgenPrizma::alan()
{
    float alan;
    alan = pow((2 * (a*b+b*c+a*c)), 2);
    return alan;
}
float DikdortgenPrizma::hacim()
{
    return (a * b * c);
}
int main(void)
{
    k.a = 1.0;
    k.b = 2.0;
    k.c = 3.0;

    cout << "degerler\n";
    cout << k.a << endl << k.b << endl << k.c << endl;
    cout << "alan: " << k.alan() << endl << "hacim: " << k.hacim() << endl;

    return 0;
}