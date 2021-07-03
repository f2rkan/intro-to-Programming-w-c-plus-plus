#include<iostream>
double harmonic(double x, double y);

int main(void)
{
    using namespace std;
    double a,b;
    cout << "iki sayi gir, 0 girersen program sonlanir:\n";
    while(cin >> a && a > 0 && cin >> b && b > 0)
    {
        cout << "harmonik ortalama: " <<  harmonic(a, b) << endl;
    }
    cout << "prg sonlandi.\n";
    return 0;
}
double harmonic(double x, double y)
{
    return 2.0 * x * y / (x + y);
}