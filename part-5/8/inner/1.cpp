#include<iostream>

inline double square(double x) { return x * x; }

int main(void)
{
    using namespace std;
    double a, b, c = 14.0;

    a = square(5);
    b = square(4.5 + 7.5);

    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", squared c = " << square(c++) << "\nnow c = " << c << endl;

    return 0;
}