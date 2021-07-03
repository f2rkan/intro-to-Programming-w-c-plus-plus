#include<iostream>
double harmonic(double x, double y);

int main(void)
{
    using namespace std;
    double a, b;
    cout << "sayi cifti girisi yap(0 girersen program sonlanir):\n";

    while((cin >> a >> b) && a != 0 && b != 0)
    {        
        cout << harmonic(a, b) << endl;
        cout << "diger cift sayi ya da 0 girerek cik programdan: ";
    }
    cout << "Done.\n";

    return 0;
}
double harmonic(double x, double y)
{
    return x * y * 2.0 / (x + y);
}