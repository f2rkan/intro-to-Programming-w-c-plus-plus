//furlong uzunluk birimini yard'a cevirioruz
#include<iostream>

double ftoyard(double);

int main(void)
{
    using namespace std;

    double furlong;
    cout << "furlong: ";
    cin >> furlong;

    cout << ftoyard(furlong) << endl;

    return 0;
}
double ftoyard(double q)
{
    return q * 220;
}