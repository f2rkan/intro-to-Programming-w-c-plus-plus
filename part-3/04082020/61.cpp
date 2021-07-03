#include<iostream>

int main(void)
{
    using namespace std;

    cout << "5 sayinin ortalamasini alacagiz\n";
    cout << "sayi girisine basla\n";

    double number;
    double sum = 0.0;

    for(int i = 0; i <= 5; i++)
    {
        cout << "deger " << i + 1 << ": ";
        cin >> number;
        sum += number;
    }

    cout << "degerlerin toplami: " << sum << endl;
    cout << "degerlerin ortalamasi: " << sum / 6 << endl;
    

    return 0;
}