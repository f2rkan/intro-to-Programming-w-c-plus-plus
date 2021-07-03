#include<iostream>

void veli(double);

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    double a;
    cout << "girdigin sayi garip bir isleme girecek: ";
    cin >> a;

    veli(a);
    return 0;
}
void veli(double q)
{
    using std::cout;
    q = q * 77 - 8 + 12 / 8;
    cout << "islem sonucu sayi: " << q << "\n";
}