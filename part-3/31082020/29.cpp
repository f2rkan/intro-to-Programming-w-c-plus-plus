#include<iostream>

int main(void)
{
    using namespace std;

    int a, b;

    cout << "iki tamsayi gir: ";
    cin >> a >> b;
    int c = a > b ? a : b;
    cout << a << " ve " << b << ", " << c << "'den daha buyuk." << endl;

    return 0;
}